#include<iostream>
#include<tchar.h>
using namespace std;


int _tmain() 
{

	int n_data = 10;

	//n_data 변수에 대한 참조자 선언
	int& ref = n_data;

	//참조자의 값을 변경하면 원본도 변경된다.
	ref = 20;
	cout << n_data << endl;


	//포인터를 쓰는 것과 비슷하다.
	int* pn_data = &n_data;

	*pn_data = 30;

	cout << n_data << endl;


	return 0;

}