#include<iostream>
#include<tchar.h>
using namespace std;

//매개 변수가 int에 대한 참조 형식이다.

void Test_Func(int& r_param) 
{
	//피호출자 함수에서 원본의 값을 변경했다
	r_param = 100;

}

int _tmain() 
{

	int n_data = 0;
	
	//참조에 의한 인수 전달이다.
	Test_Func(n_data);

	cout << n_data << endl;

	return 0;

}
//함수를 호출할때 넘겨준 인자만 보면은 매개변수의 참조 형식을 알 수 없다는것이다 이것을 잘 기억하자