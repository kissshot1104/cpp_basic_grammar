#include<iostream>
#include<string>
#include<tchar.h>

using namespace std;

class CTest
{

public:
	
	//CTest Ŭ������ '������ �Լ�' ���� �� ����
	int c_m_n_data;
	CTest() 
	{

		c_m_n_data = 10;

	}

	void c_m_f_PrintData();

};

void CTest::c_m_f_PrintData() 
{

	cout << c_m_n_data << endl;

}

int _tmain() 
{

	CTest t;
	t.c_m_f_PrintData();

	return 0;

}
