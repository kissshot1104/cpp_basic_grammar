#include<iostream>
#include<tchar.h>
using namespace std;

namespace TEST 
{

	int g_data = 100;

	void Test_Func(void) 
	{

		cout << "TEST ::Test_Func()" << endl;

	}

}
namespace Copy_Test
{

	int g_data = 200;
	void Test_Func(void) 
	{

		cout << "Copy_Test :: Test_Func()" << endl;

	}

}

using namespace TEST;
//using namespace Copy_Test;
int _tmain() 
{

	//Test_Func()나 g_data에도 범위 지정을 할 필요가 없다.
	Test_Func();
	cout << g_data << endl;

}