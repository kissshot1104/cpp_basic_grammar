#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyPoint {
private:
	int m_x = 0;
	int m_y = 0;

public:
	CMyPoint(int x)
	{
		cout << "CMyPoint(int)" << endl;
		//x ���� 100�� �Ѵ��� �˻��ϰ� ������ 100���� �����.
		if (x > 100)
			x = 100;

		m_x = 100;
	}
	CMyPoint(int x, int y) 
		: CMyPoint(x)//x���� �˻��ϴ� �ڵ尡 ������� ���̿� �Ѵ�.
	{

		cout << "CMyPoint(int,int)" << endl;
		//���� 200�� �Ѵ��� �˻��ϰ� ������ 200���� �����.
		if (y > 200)
			y = 200;

		m_y = 200;
	
	}

	void Print() 
	{
		cout << "X:" << m_x << endl;
		cout << "Y:" << m_y << endl;
	}

	~CMyPoint() {};

};

int _tmain() 
{

	//�Ű������� �ϳ��� �����ڸ� ȣ���Ѵ�.

	CMyPoint ptBegin(110);
	ptBegin.Print();

	//�̹����� �� ������ ��� ȣ���Ѵ�.
	CMyPoint ptEnd(50, 250);
	ptEnd.Print();

	return 0;

}
