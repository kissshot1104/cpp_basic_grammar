#include<iostream>
#include<tchar.h>
using namespace std;


//����ڴ� �� ���� ���ϴ� ����� �����ؾ� �Ѵ�.
int CompareData(const void* pLeft, const void* pRight) 
{
	return *(int*)pLeft - *(int*)pRight;
}

int _tmain() 
{

	int aList[5] = { 30,50,10,20,40 };

	//�� ���� ���ϴ� ���(�Լ� �ּ�)�� �ݹ� �Լ��� �����Ѵ�.
	qsort(aList, 5, sizeof(int), CompareData);
	

	for (auto& n : aList)
		cout << n << '\t';

	cout << endl;
	return 0;

}