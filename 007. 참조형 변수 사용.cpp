#include<iostream>
#include<tchar.h>
using namespace std;


int _tmain() 
{

	int n_data = 10;

	//n_data ������ ���� ������ ����
	int& ref = n_data;

	//�������� ���� �����ϸ� ������ ����ȴ�.
	ref = 20;
	cout << n_data << endl;


	//�����͸� ���� �Ͱ� ����ϴ�.
	int* pn_data = &n_data;

	*pn_data = 30;

	cout << n_data << endl;


	return 0;

}