//�ڽ��� �̸��� ���̸� �Է¹ް� "���� �̸��� ȫ�浿�̰�, 20���Դϴ�."��� ����ϴ� ���α׷��� �ۼ��ϼ���, ��, �ݵ�� std::cout,std::cin�� �̿��ؼ� �ۼ��մϴ�.

#include<tchar.h>
#include<iostream>
#include<string>

int _tmain() 
{
	std::string name = { 0, };
	int age=0;

	std::cout << "�̸��� �Է����ּ��� : ";
	std::cin >> name;

	std::cout << "���̸� �Է����ּ��� : ";
	std::cin >> age;

	std::cout << "���� �̸��� " << name << "�̰�, ���̴� " << age << "�� �Դϴ�." << std::endl;

}