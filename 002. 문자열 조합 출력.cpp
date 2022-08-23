#include<iostream>
#include<string>
#include<tchar.h>

int _tmain() 
{

	std::string str_data = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << str_data << std::endl;

	str_data = "New string";
	std::cout << str_data << std::endl;

	std::cout << "저는 " << 25 << "살" << "입니다" << std::endl;

	return 0;

}