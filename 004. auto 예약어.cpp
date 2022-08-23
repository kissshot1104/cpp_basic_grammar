#include<iostream>
#include<tchar.h>

int _tmain() 
{

	int a = 10;
	int b(a);
	auto c(b);			//초깃값의 형식에 맞춰 선언하는
						//인스턴스의 형식이 '자동'으로 결정됨


	std::cout << a + b + c << std::endl;

	return 0;

}