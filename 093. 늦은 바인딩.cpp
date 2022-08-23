#include<iostream>
#include<tchar.h>
using namespace std;


void TestFunc1(int nparam) {}
void TestFunc2(int nparam) {}


int _tmain() 
{
	int nInput = 0;
	cin >> nInput;

	void(*pfTest)(int) = NULL;

	if (nInput > 10)
		pfTest = TestFunc1;

	else
		pfTest = TestFunc2;

	pfTest(10);

	return 0;
}