#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

class CTest 
{

private:
	int m_nData = 0;

public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {};


	int GetData()const  
	{
		//��� ������ ���� ���� ���� ������ �� ���� ����.
		return m_nData;
	}

	int SetData(int nParam) { m_nData = nParam; }


};


int _tmain() 
{

	CTest a(10);
	cout << a.GetData() << endl;

	return 0;

}