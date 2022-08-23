#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
public:
	CMyData() {
		//CMyData *__vfptr = CMyData의 vtable주소
		cout << "CMyData()" << endl;
		
	}

	virtual ~CMyData() { }
	virtual void TestFunc1() {}
	virtual void TestFunc2() {}

protected:
	//CMyData *__vfptr
};

class CMyDataEx : public CMyData 
{
public:
	CMyDataEx() 
	{
		//CMyData *__vfptr = CMyDataEx의 vtable주소
		cout << "CMyDataEx()" << endl;
	}

	virtual~CMyDataEx() {}
	virtual void TestFunc1() {}
	virtual void TestFunc2() 
	{
		cout << "TestFunc2()" << endl;
	}
protected:
	//CMyDataEx *__vfptr
};

int _tmain() 
{
	CMyData* pData = new CMyDataEx;
	pData->TestFunc2();
	delete pData;
}