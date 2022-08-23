//자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다."라고 출력하는 프로그램을 작성하세요, 단, 반드시 std::cout,std::cin을 이용해서 작성합니다.

#include<tchar.h>
#include<iostream>
#include<string>

int _tmain() 
{
	std::string name = { 0, };
	int age=0;

	std::cout << "이름을 입력해주세요 : ";
	std::cin >> name;

	std::cout << "나이를 입력해주세요 : ";
	std::cin >> age;

	std::cout << "나의 이름은 " << name << "이고, 나이는 " << age << "살 입니다." << std::endl;

}