#include<iostream>
#include<string>
#include<tchar.h>


using namespace std;

class USERDATA
{
public:
	//��� ���� ����
	int age;
	char sz_name[32];


	//��� �Լ� ���� �� ����
	void print(void)
	{

		//age�� sz_name�� print() �Լ��� ���� ������ �ƴϴ�!
		cout << age << ", " << sz_name << endl;


	}
};

int _tmain()
{

	USERDATA user = { 10,"ö��" };
	user.print();

	return 0;

}