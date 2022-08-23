#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

//r-value 참조 형식
void TestFunc(int&& rParam) 
{
	cout << "TestFunc(int &&)" << endl;
}

//r-value 참조 형식과 호출자 코드가 같다.
void TestFunc(int nParam) 
{
	cout << "TestFunc(int)" << endl;
}

int _tmain() 
{

	//모호한 호출이다. int형과 int&&.형 모두 가능하다!
	TestFunc(3 + 4);

	return 0;
	//연산자 다중 정의때 자세하게 알아보자
}