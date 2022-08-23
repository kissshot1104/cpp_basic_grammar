#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain() 
{

	int nData = 10;
	int nData2 = 20;
	cout << nData << endl;
	auto TestFunc = [nData](void)->void // 값만 가져오며 값을 바꾸지못함
	{
		//nData++;			<-에러남
		cout << nData << endl;
	};

	auto TestFunc2 = [&nData](void)->void //값이 변경됨
	{
		nData++;
		cout << nData << endl;
	};

	auto TestFunc3 = [=](void)->void //변수를 전부 가져오지만 값이 변경안됨
	{
		//nData++;			<-에러남
		cout << nData2 << endl;
	};

	auto TestFunc4 = [&](void)->void //변수를 전부 가져오고 값이 변경됨
	{
		nData++;
		nData2++;
		cout << nData2 << endl;
	};

	auto TestFunc5 = [](void) {cout << "반환 형식 생략" << endl; };
	auto TestFunc6 = []() {cout << "반환 형식, 매개변수 생략" << endl; };
	auto TestFunc7 = [] {cout << "모두 void이므로 괄호까지 생략" << endl; };

	auto TestFunc8 = [nData, nData2](void)->void
	{
		cout << nData << endl;
		cout << nData2 << endl;
	};
	auto Test = [nData, &nData2](void)->void
	{
		cout << nData << endl;
	};
	


	TestFunc();
	TestFunc2();
	TestFunc3();
	TestFunc4();
	TestFunc5();
	TestFunc6();
	TestFunc7();

	cout << nData2 << endl;
	return 0;

}