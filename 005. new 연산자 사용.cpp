#include<iostream>
#include<tchar.h>

int _tmain() 
{

	//�ν��Ͻ��� �������� �����ϴ� ���
	int* pdata = new int;


	//�ʱ갪�� ����ϴ� ���
	int* new_pdata = new int(10);

	*pdata = 5;
	
	std::cout << *pdata << std::endl;
	std::cout << *new_pdata << std::endl;

	delete pdata;
	delete new_pdata;


}