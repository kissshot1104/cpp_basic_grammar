#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;


class CTest 
{

public:
	//�� ���� ��� ������ ����
	int c_m_n_data1, c_m_n_data2;

	//������ �ʱ�ȭ ����� �̿��� ��� �ʱ�ȭ
	CTest()
		:c_m_n_data1(10), c_m_n_data2(20) 
	{};

	//��� �Լ� ���� �� ����

	void c_m_f_PrintData(void) 
	{
		cout << c_m_n_data1 << endl;
		cout << c_m_n_data2 << endl;
	}


};

int _tmain() 
{

	CTest t;
	t.c_m_f_PrintData();

	return 0;

}