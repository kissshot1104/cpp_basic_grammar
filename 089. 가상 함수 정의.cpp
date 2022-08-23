#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{
protected:
	int m_nData = 10;
public:
	virtual void PrintData()
	{
		cout << "CMyData: " << m_nData << endl;
	}

	void TestFunc()
	{
		cout << "***TestFunc()***" << endl;


		//�� ������ �Լ��� ȣ��ȴ�.!
		PrintData();
		cout << "****************" << endl;
	}
};

class CMyDataEx : public CMyData 
{
public:
	//�⺻ Ŭ������ ���� �Լ� ����� �������ߴ�.
	//���� ���� ���Ǵ� ���õȴ�.
	virtual void PrintData();

};
void CMyDataEx::PrintData()
{
	cout << "CMyDataEx : " << m_nData * 2 << endl;
}
int _tmain() 
{

	CMyDataEx a;
	a.PrintData();

	CMyData& b = a;
	

	//���� ���Ŀ� ������� �� ������ �Լ��� ȣ��ȴ�.
	b.PrintData();


	//�� �������� �����ǵ� �Լ��� ȣ��ȴ�.
	a.TestFunc();


}