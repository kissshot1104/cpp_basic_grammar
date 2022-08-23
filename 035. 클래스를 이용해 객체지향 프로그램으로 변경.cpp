#include<iostream>
#include<string>
#include<tchar.h>


using namespace std;

class USERDATA
{
public:
	//멤버 변수 선언
	int age;
	char sz_name[32];


	//멤버 함수 선언 및 정의
	void print(void)
	{

		//age와 sz_name은 print() 함수의 지역 변수가 아니다!
		cout << age << ", " << sz_name << endl;


	}
};

int _tmain()
{

	USERDATA user = { 10,"철수" };
	user.print();

	return 0;

}