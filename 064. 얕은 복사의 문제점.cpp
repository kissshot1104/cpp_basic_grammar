#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

int _tmain() 
{

	//�� '��'
	int* pA, * pB;

	//�� ģ���� �׳� ź��
	pA = new int;
	*pA = 10;

	//�ڱ� ���� ģ�� ���ΰ� ģ���� ģ���� ������ ���� �ٺ�
	pB = new int;
	pB = pA;


	cout << *pA << endl;
	cout << *pB << endl;


	//�׷� �̰�?
	delete pA;
	delete pB;

	return 0;

}