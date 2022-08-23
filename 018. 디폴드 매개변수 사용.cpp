#include<iostream>
#include<tchar.h>

int Test_Func2(int n_param = 10);


int Test_Func1(int n_param = 10)
{

	return n_param;
}

int Test_Func2(int n_param) 
{

	return n_param;

}

int _tmain() 
{
	//호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
	std::cout << "디폴트 매개변수 사용 -> "<<Test_Func1() << std::endl;

	//호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
	std::cout << "디폴트 매개변수 사용안함 -> "<<Test_Func1(20) << std::endl;


	//호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
	std::cout << "디폴트 매개변수 사용 -> " << Test_Func2() << std::endl;

	//호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
	std::cout << "디폴트 매개변수 사용안함 -> " << Test_Func2(20) << std::endl;


	return 0;
}
