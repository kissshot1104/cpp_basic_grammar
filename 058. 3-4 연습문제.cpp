//���� �ڵ忡�� �߸��� ���� �����̸� ���� ������ ���Ϸ��� ��� �����ؾ� �ϴ��� ���ϼ���
#include<iostream>
#include<tchar.h>
#include<string>
class CRefTest 
{

private:
	int m_nData;
	//int& m_nData;		<-�̰��� �ٲ۴�.

public:
	CRefTest(int &rParam)
	{

		m_nData = rParam;

	}

	int GetData(void) { return m_nData; };

};

int _tmain() 
{

	return 0;
}