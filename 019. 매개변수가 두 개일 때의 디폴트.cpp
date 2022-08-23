#include<iostream>
#include<tchar.h>

int Test_Func(int n_param1, int n_param2 = 2) 
{

	return n_param1 * n_param2;
	//디폴트 매개변수를 여러개 쓸때는 반드시 오른쪽부터 해야한다. 
	//왼쪽끝까지 쓰고싶으면 오른쪽에서부터 하나도 빼먹지않고 디폴트 매개변수를 설정해주어야한다.
	//디폴트 매개변수는 모호성을 만들기 때문에 왠만하면 사용하지말자
}

int _tmain() 
{

	std::cout << Test_Func(10) << std::endl;

	std::cout << Test_Func(10,5) << std::endl;

}

