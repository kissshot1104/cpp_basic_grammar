#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CTest 
{
public:
	CTest() 
	{
		cout << "CTest::Ctest()" << endl;
	}

	~CTest() 
	{
		cout << "~CTest::CTest()" << endl;
	}

};

int _tmain() 
{
	
	cout << "begin" << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End" << endl;

	return 0;


}