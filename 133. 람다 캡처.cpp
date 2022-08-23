#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain() 
{

	int nData = 10;
	int nData2 = 20;
	cout << nData << endl;
	auto TestFunc = [nData](void)->void // ���� �������� ���� �ٲ�������
	{
		//nData++;			<-������
		cout << nData << endl;
	};

	auto TestFunc2 = [&nData](void)->void //���� �����
	{
		nData++;
		cout << nData << endl;
	};

	auto TestFunc3 = [=](void)->void //������ ���� ���������� ���� ����ȵ�
	{
		//nData++;			<-������
		cout << nData2 << endl;
	};

	auto TestFunc4 = [&](void)->void //������ ���� �������� ���� �����
	{
		nData++;
		nData2++;
		cout << nData2 << endl;
	};

	auto TestFunc5 = [](void) {cout << "��ȯ ���� ����" << endl; };
	auto TestFunc6 = []() {cout << "��ȯ ����, �Ű����� ����" << endl; };
	auto TestFunc7 = [] {cout << "��� void�̹Ƿ� ��ȣ���� ����" << endl; };

	auto TestFunc8 = [nData, nData2](void)->void
	{
		cout << nData << endl;
		cout << nData2 << endl;
	};
	auto Test = [nData, &nData2](void)->void
	{
		cout << nData << endl;
	};
	


	TestFunc();
	TestFunc2();
	TestFunc3();
	TestFunc4();
	TestFunc5();
	TestFunc6();
	TestFunc7();

	cout << nData2 << endl;
	return 0;

}