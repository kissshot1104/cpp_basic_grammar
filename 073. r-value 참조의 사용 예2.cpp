#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

void TestFunc(int& rParam) 
{
	cout << "TestFunc(int &)" << endl;
}


void TestFunc(int&& rParam) 
{
	cout << "TestFunc(int&&)" << endl;
}

int _tmain() 
{
	//3 + 4 ���� ��� r-value�̴�. ����� l-value�� �� �� ����.
	TestFunc(3 + 4);

	return 0;
}
