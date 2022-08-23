#include<cstdio>
#include<iostream>
#include<tchar.h>
using namespace std;
#define ADD(a,b)((a) + (b))


int Add(int a, int b) 
{
	return a + b;
}

inline int Add_New(int a, int b) 
{
	return a + b;
}

int _tmain() 
{

	int a, b;
	cin >> a >> b;

	cout << "ADD() : " << Add(a, b) << endl;
	cout << "Add() : " << Add(a, b) << endl;
	cout << "Add_New() : " << Add_New(a, b) << endl;

	return 0;

}