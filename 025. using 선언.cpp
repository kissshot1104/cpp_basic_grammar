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

	//Test_Func()�� g_data���� ���� ������ �� �ʿ䰡 ����.
	Test_Func();
	cout << g_data << endl;

}