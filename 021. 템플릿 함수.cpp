#include<iostream>
#include<tchar.h>

template <typename T>
T Test_Func(T a) 
{

	std::cout << "매개변수 a: " << a << std::endl;

	return a;
}


int _tmain() 
{

	std::cout << "int\t" << Test_Func(3) << std::endl;
	std::cout << "double\t" << Test_Func(3.3) << std::endl;
	std::cout << "char\t" << Test_Func('A') << std::endl;
	std::cout << "char*\t" << Test_Func("TestString") << std::endl;

}