/*#include<iostream>
#include<functional>
#include<tchar.h>
using namespace std;


//std::function 템플릿 클래스를 매개변수로 받는다.
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


		//함수의 실인수로 함수 몸체를 람다식으로 기술한다.

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