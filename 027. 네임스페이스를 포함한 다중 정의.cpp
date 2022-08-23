#include<iostream>
#include<tchar.h>
using namespace std;

//전역(개념상 무소속)
void Test_Func(void) 
{
	cout << "::Test_Func()" << endl;
}

namespace TEST 
{

	void Test_Func(void) 
	{
		cout << "TEST::Test_Func()" << endl;
	}

}

namespace MYDATA 
{
	//MYDATA 네임스페이스 소속
	void Test_Func(void) 
	{
		cout << "DATA::Test_Func()" << endl;
	}

}

int _tmain() 
{
	Test_Func();			//묵시적 전역
	::Test_Func();			//명시적 전역
	TEST::Test_Func();
	MYDATA::Test_Func();


	return 0;
}