//한글로는 함수 다중 정의라고 하고 영어로는 오버로딩이라고 한다
#include<iostream>
#include<tchar.h>

int _Add(int a, int b, int c) 
{

	std::cout << "add( int, int, int): ";
	return a + b + c;

}

int _Add(int a, int b) 
{

	std::cout << "add( int, int) : ";

	return a + b;

}


double _Add(double a, double b) {

	std::cout << "add(double, double): ";
	return a + b;

}

int _tmain(int argc, _TCHAR* argv[]) 
{

	std::cout << _Add(3, 4) << std::endl;
	std::cout << _Add(3, 4, 5) << std::endl;
	std::cout << _Add(3.3, 4.4) << std::endl;

	return 0;

}
