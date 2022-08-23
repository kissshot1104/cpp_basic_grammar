#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
private:
	int m_nData=0;
public:
	int GetData() const { return m_nData; };

	void SetData(int nParam) { m_nData = nParam; }



};

//�ı� ������
class CMyDataEx : public CMyData 
{
public:
	//�Ļ� Ŭ�������� �⺻ Ŭ������ �޼ҵ带 �������ߴ�
	void SetData(int nParam) 
	{
		//�Է� �������� ���� �����ϴ� ���ο� ����� �߰��Ѵ�.
		if (nParam < 0)
			CMyData::SetData(0);

		if (nParam > 10)
			CMyData::SetData(10);
	}
};


//����� �ڵ�
int _tmain() 
{
	CMyData a;
	a.SetData(-10);
	cout << a.GetData() << endl;


	//�������� ���� �����ϴ� ����� �ִ�.
	CMyDataEx b;
	b.SetData(15);
	cout << b.GetData() << endl;
}