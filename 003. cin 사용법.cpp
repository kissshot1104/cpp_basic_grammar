#include<iostream>
#include<string>
#include<tchar.h>
#include<cstdio>

int _tmain() 
{

	int age = 0;
	std::cout << "���̸� �Է����ּ��� : ";
	std::cin >> age;

	char sz_job[32] = { 0, };
	std::cout << "�۾��� �Է��ϼ��� : ";
	std::cin >> sz_job;

	std::string str_name;
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> str_name;


	std::cout << "����� �̸��� " << str_name << "�̰�, ���̴� "
		<< age << "���̸�, ������ " << sz_job << "�Դϴ�." << std::endl;

	return 0;
}