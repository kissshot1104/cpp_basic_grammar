#include<iostream>
#include<tchar.h>
using namespace std;


int _tmain() 
{
	int a = 100, b;
	cout << "Input number : ";
	cin >> b;

	if (b > 0)
		cout << a / b << endl;

	else
		cout << "ERROR : 0���� ���� �� �����ϴ�." << endl;

	return 0;
}