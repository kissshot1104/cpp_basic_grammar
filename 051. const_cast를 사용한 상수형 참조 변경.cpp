#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


void TestFunc(const int& nParam) 
{

	//����� ���������� �Ϲ� ������ ����ȯ�ߴ�.
	int &nNewParam = const_cast<int&>(nParam);
	nNewParam = 20;

}

int _tmain() 
{

	int nData = 10;

	//����� ������ ���������� ���� ����ȴ�.
	TestFunc(nData);

	//����� ���� ����Ѵ�.
	cout << nData << endl;

	return 0;

}