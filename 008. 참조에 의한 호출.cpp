#include<iostream>
#include<tchar.h>
using namespace std;

//�Ű� ������ int�� ���� ���� �����̴�.

void Test_Func(int& r_param) 
{
	//��ȣ���� �Լ����� ������ ���� �����ߴ�
	r_param = 100;

}

int _tmain() 
{

	int n_data = 0;
	
	//������ ���� �μ� �����̴�.
	Test_Func(n_data);

	cout << n_data << endl;

	return 0;

}
//�Լ��� ȣ���Ҷ� �Ѱ��� ���ڸ� ������ �Ű������� ���� ������ �� �� ���ٴ°��̴� �̰��� �� �������