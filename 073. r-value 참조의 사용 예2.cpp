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
	//3 + 4 연산 결과 r-value이다. 절대로 l-value가 될 수 없다.
	TestFunc(3 + 4);

	return 0;
}
