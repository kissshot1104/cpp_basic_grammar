#include<iostream>
#include<tchar.h>
using namespace std;


int Test_Func(int n_param) 
{

	int n_result = n_param * 2;


	return n_result;

}

int _tmain() 
{

	int n_input = 0;
	cout << "Input number : ";
	cin >> n_input;

	//산술 연산으로 만들어진 임시 객체에 대한 r-value 참조

	int&& r_data = n_input + 5;
	cout << r_data << endl;
	cout << 3+4* 2 << endl;


	int&& result = Test_Func(10);

	//값을 변경할 수 있다.

	result += 10;
	cout << result << endl;


	

	return 0;

}