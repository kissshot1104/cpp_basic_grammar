#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTest 
{
private:
	mutable int m_nData = 0;
public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {}

	//����� �޼���� ���� �� �����ߴ�.

	int GetData() const 
	{

		//����� �޼���� mutable ��� �������� ���� �� �� �ִ�.
		m_nData = 20;
		return m_nData;

	}

	int SetData(int nParam) 
	{

		m_nData = nParam;

	}
};



int _tmain() 
{

	CTest a(10);
	cout << a.GetData() << endl;

}