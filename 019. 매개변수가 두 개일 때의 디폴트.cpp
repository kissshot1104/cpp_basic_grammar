#include<iostream>
#include<tchar.h>

int Test_Func(int n_param1, int n_param2 = 2) 
{

	return n_param1 * n_param2;
	//����Ʈ �Ű������� ������ ������ �ݵ�� �����ʺ��� �ؾ��Ѵ�. 
	//���ʳ����� ��������� �����ʿ������� �ϳ��� �������ʰ� ����Ʈ �Ű������� �������־���Ѵ�.
	//����Ʈ �Ű������� ��ȣ���� ����� ������ �ظ��ϸ� �����������
}

int _tmain() 
{

	std::cout << Test_Func(10) << std::endl;

	std::cout << Test_Func(10,5) << std::endl;

}

