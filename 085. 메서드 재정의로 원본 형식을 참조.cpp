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

//후기 제작자
class CMyDataEx : public CMyData
{
public:
	//파생 클래스에서 기본 클래스의 메소드를 재정의했다
	void SetData(int nParam)
	{
		//입력 데이터의 값을 보정하는 새로운 기능을 추가한다.
		if (nParam < 0)
			CMyData::SetData(0);

		if (nParam > 10)
			CMyData::SetData(10);
	}
};


//사용자 코드
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