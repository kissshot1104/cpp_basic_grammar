#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTest 
{

public:
	//CTest Ŭ������ '������ �Լ�' ���� �� ����
	
	CTest()
	{
		//�ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�����' �ʱ�ȭ�Ѵ�.
		m_n_data = 10;
	}

	//��� ������ ����
	int m_n_data;

	void c_m_PrintData(void) 
	{

		cout << m_n_data << endl;

	}

};

int _tmain() 
{

	CTest t;
	t.c_m_PrintData();

	return 0;

}

