#include<memory>
#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
	void TestFunc() { cout << "CMyData::TestFunc()" << endl; }

};


int _tmain() 
{
	auto_ptr<CMyData>ptrTest(new CMyData);
	auto_ptr<CMyData>ptrNew;


	cout << "0x" << ptrTest.get() << endl;


	//�����͸� �����ϸ� ���� �����ʹ� NULL�� �ȴ�.
	ptrNew = ptrTest;
	cout << "0x" << ptrTest.get() << endl;

	//���� �� �ڵ带 ������ �� ����.
	ptrTest->TestFunc();


	return 0;
}