#include<iostream>
#include<tchar.h>
using namespace std;


template<typename T>
class CTest 
{
protected:
	//���� ��� ������ ����
	static T m_Data;
public:
	CTest();
	T TestFunc();

};

//������ ����
template<typename T>
CTest<T>::CTest() 
{

}

//��� �Լ� ����
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