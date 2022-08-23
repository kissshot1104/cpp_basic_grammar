#include<iostream>
#include<string>
#include<tchar.h>
#include<cstdio>

int _tmain() 
{

	int age = 0;
	std::cout << "나이를 입력해주세요 : ";
	std::cin >> age;

	char sz_job[32] = { 0, };
	std::cout << "작업을 입력하세요 : ";
	std::cin >> sz_job;

	std::string str_name;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> str_name;


	std::cout << "당신의 이름은 " << str_name << "이고, 나이는 "
		<< age << "살이며, 직업은 " << sz_job << "입니다." << std::endl;

	return 0;
}