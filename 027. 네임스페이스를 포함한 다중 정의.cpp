#include<iostream>
#include<tchar.h>
using namespace std;

//����(����� ���Ҽ�)
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
	//MYDATA ���ӽ����̽� �Ҽ�
	void Test_Func(void) 
	{
		cout << "DATA::Test_Func()" << endl;
	}

}

int _tmain() 
{
	Test_Func();			//������ ����
	::Test_Func();			//����� ����
	TEST::Test_Func();
	MYDATA::Test_Func();


	return 0;
}