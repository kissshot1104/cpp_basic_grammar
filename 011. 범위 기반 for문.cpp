#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

int _tmain() 
{

	int a_list[5] = { 10,20,30,40,50 };


	//전형적인 C스타일 반복문
	for (int i = 0; i < 5; i++)
		cout << a_list[i] << endl;


	//범위 기반 c++11스타일 반복문
	//각 요소의 값을 n에 복사한다.
	for (auto n : a_list)
		cout << n << endl;

	
	for (auto& n : a_list)
		cout << n << endl;


	cout << endl;
	return 0;

}