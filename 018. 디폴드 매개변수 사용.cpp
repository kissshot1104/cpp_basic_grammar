#include<iostream>
#include<tchar.h>

int Test_Func2(int n_param = 10);


int Test_Func1(int n_param = 10)
{

	return n_param;
}

int Test_Func2(int n_param) 
{

	return n_param;

}

int _tmain() 
{
	//ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << "����Ʈ �Ű����� ��� -> "<<Test_Func1() << std::endl;

	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << "����Ʈ �Ű����� ������ -> "<<Test_Func1(20) << std::endl;


	//ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << "����Ʈ �Ű����� ��� -> " << Test_Func2() << std::endl;

	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << "����Ʈ �Ű����� ������ -> " << Test_Func2(20) << std::endl;


	return 0;
}
