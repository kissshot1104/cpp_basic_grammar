#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

namespace park 
{
	//네임스페이스 시작

	int g_data = 100;

	void Test_Func(void) 
	{
		cout << "park::Test_Func()" << endl;
	}
	//네임 스페이스 끝
}

int _tmain() 
{

	park::Test_Func();
	cout << park::g_data << endl;

	return 0;

}