#include<iostream>
#include<tchar.h>
#include<memory>
using namespace std;


int _tmain() 
{
	int a = 100, b;
	cout << "Input number : ";
	cin >> b;


	try 
	{

		//���ܸ� �˻��ϰ� '������'
		if (b == 0)
			throw b;


		else
			cout << a / b << endl;
	}

	catch (int nExp)
	{
		//���ܸ� �޾� ó���Ѵ�.
		cout << "ERROR : " << nExp << "���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}