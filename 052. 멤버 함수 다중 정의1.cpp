#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData {

private:
	int m_nData;

public:
	CMyData() :m_nData(0) {}
	int GetData(void) const { return m_nData; }

	void TestFunc(int nParam) { m_nData = nParam; }
	//매개 변수가 double 자료형인 경우로 다중 정의했다.
	void SetData(double dParam) { m_nData = 0; }

};

int _tmain() 
{

	CMyData a;

	//CMyData::SetData(int) 메서드가 호출된다.
	a.SetData(10);
	cout << a.GetData() << endl;

	CMyData b;
	
	//CMyData::SetData(double)메서드가 호출된다.
	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;

}