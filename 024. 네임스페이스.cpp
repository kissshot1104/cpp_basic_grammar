#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

namespace park 
{
	//���ӽ����̽� ����

	int g_data = 100;

	void Test_Func(void) 
	{
		cout << "park::Test_Func()" << endl;
	}
	//���� �����̽� ��
}

int _tmain() 
{

	park::Test_Func();
	cout << park::g_data << endl;

	return 0;

}