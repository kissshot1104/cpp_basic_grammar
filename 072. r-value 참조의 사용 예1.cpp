#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


int _tmain() 
{

	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;

	return 0;
}