#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;


//���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.

void Swap(int& a, int& b) 
{

	int temp = 0;

	temp = a;
	a = b;
	b = temp;

	return;

}

int _tmain() 
{

	int x = 10, y = 20;

	//���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(x, y);

	//��ȯ�� ����� ����Ѵ�.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;

}