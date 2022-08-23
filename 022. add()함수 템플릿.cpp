#include<iostream>
#include<tchar.h>
using namespace std;
template <typename T>

T _Add(T x, T y) 
{

	return x + y;

}

int _tmain() 
{

	cout << _Add(3, 3) << endl;
	cout << _Add(4.4, 4.4) << endl;

}