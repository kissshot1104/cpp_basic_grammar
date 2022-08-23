#include<iostream>
#include<tchar.h>
using namespace std;


template<typename T>
class CTest 
{
protected:
	//정적 멤버 데이터 선언
	static T m_Data;
public:
	CTest();
	T TestFunc();

};

//생성자 정의
template<typename T>
CTest<T>::CTest() 
{

}

//멤버 함수 정의
template<typename T>
T CTest<T>::TestFunc()
{

	return m_Data;
}

template<typename T>
T CTest<T>::m_Data = 15;

int _tmain() 
{

	CTest<double> a;
	cout << a.TestFunc() << endl;
	CTest<int> b;
	cout << b.TestFunc() << endl;

}