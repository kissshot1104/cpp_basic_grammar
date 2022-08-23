#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData
{
private:
	int m_nData = 0;
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
	/*CMyDataEx a;
	CMyData& rData = a;
	rData.SetData(14);
	cout << rData.GetData() << endl;*/

	CMyData* pData = new CMyDataEx;

	pData->SetData(14);
	cout << pData->GetData() << endl;
	delete pData;

	return 0;
}