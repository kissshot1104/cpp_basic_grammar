#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

int _tmain() 
{

	int a_list[5] = { 10,20,30,40,50 };


	//�������� C��Ÿ�� �ݺ���
	for (int i = 0; i < 5; i++)
		cout << a_list[i] << endl;


	//���� ��� c++11��Ÿ�� �ݺ���
	//�� ����� ���� n�� �����Ѵ�.
	for (auto n : a_list)
		cout << n << endl;

	
	for (auto& n : a_list)
		cout << n << endl;


	cout << endl;
	return 0;

}