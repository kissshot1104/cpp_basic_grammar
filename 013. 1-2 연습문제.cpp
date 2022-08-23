//c++11에서 auto 예약어는 어떤 의미인지 쓰고 코드로 예를 보이세요

#include<iostream>
#include<string>
#include<tchar.h>
int _tmain() 
{

	//auto 예약어는 처음 정해진 값의 형태에 따라 자료형이 변한다

	auto a = 1;

	auto b = 'c';

	auto c = "sss";


	std::cout << b << std::endl << a << std::endl<< c << std::endl;

}