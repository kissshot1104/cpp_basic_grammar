#include<iostream>
#include<tchar.h>

int _tmain() 
{

	//인스턴스만 동적으로 생성하는 경우
	int* pdata = new int;


	//초깃값을 기술하는 경우
	int* new_pdata = new int(10);

	*pdata = 5;
	
	std::cout << *pdata << std::endl;
	std::cout << *new_pdata << std::endl;

	delete pdata;
	delete new_pdata;


}