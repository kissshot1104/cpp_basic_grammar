#include<iostream>
#include<tchar.h>

int _tmain() 
{

	int a = 10;
	int b(a);
	auto c(b);			//�ʱ갪�� ���Ŀ� ���� �����ϴ�
						//�ν��Ͻ��� ������ '�ڵ�'���� ������


	std::cout << a + b + c << std::endl;

	return 0;

}