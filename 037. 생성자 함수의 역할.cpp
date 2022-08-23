#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

class CTest 
{
public:

	int m_n_data;
	
	CTest() 
	{

		m_n_data = 10;

	}

	void m_f_PrintData(void) 
	{

		cout << m_n_data << endl;

	}
	

};

int _tmain() 
{

	cout << "_tmain() 함수 시작" << endl;

	CTest t;
	t.m_f_PrintData();

	cout << "_tmain() 함수 끝" << endl;

	return 0;

}
