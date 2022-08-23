/*#include<iostream>
#include<functional>
#include<tchar.h>
using namespace std;


//std::function ���ø� Ŭ������ �Ű������� �޴´�.
void TestFunc(const char* pszParam, function<int(const char*, int)>param) 
{

	cout << pszParam << endl;
	param("hello", 10);

}

int _tmain() 
{

	cout << "******begin******" << endl;
	::TestFunc(
		"TestFunc()",


		//�Լ��� ���μ��� �Լ� ��ü�� ���ٽ����� ����Ѵ�.

		[](const char* psz_param, int nParam)->int
	{

		cout << psz_param << " : " << nParam << endl;
		return 0;
	}
	);


	cout << "******END******" << endl;

	return 0;

}*/

#include<iostream>
#include<tchar.h>
#include<functional>
using namespace std;


void TestFunc(const char* text,function<int(const char*,int)> param) 
{

	param(text, 3);


	return;

}

int _tmain() 
{

	::TestFunc(
		"TestFunction",
		[](const char* text, int num) -> int
	{
		cout << text << endl;
		cout << num << endl;

		return 0;
	}
	);


	return 0;

}