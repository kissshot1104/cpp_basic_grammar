#include<iostream>
#include<tchar.h>
using namespace std;

int TestFunc() 
{

	cout << "TestFunc" << endl;

	return 0;
}


int _tmain() 
{

	auto tf = [](int a)->int
	{
		cout << "lamda" << endl;

		return 0;
	};


	tf(3);

}