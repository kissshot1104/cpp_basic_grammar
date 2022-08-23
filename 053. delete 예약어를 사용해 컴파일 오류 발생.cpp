#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{

private:
	int m_nData;

public:
	CMyData() : m_nData(0) {};
	~CMyData() {};
	int GetData(void) { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };


	void SetData(double dParam) = delete;

};

//사용자 코드

int _tmain() 
{

	CMyData a;

	//CMyData::SetData(int)메서드가 호출된다.
	a.SetData(10);

	cout << a.GetData() << endl;

	CMyData b;

	//CMyData::SetData(double)메서드가 호출된다.

	b.SetData(5.5);
	cout << b.GetData() << endl;

}