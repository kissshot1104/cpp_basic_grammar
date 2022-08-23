#include<iostream>
#include<string>
#include<tchar.h>

using namespace std;

class CMyData 
{

private:

	int m_nData=0;
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() {};

	// 복사 생성자 선언 및 정의
	CMyData(const CMyData& rhs)
	// : m_nData(rhs.m_nData)
	{

		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &)" << endl;

	}

	int GetData(void) const {
		return m_nData;
	};

	void SetData(int nParam) { m_nData = nParam; };

};


int _tmain() 
{

	CMyData a;
	a.SetData(10);

	//복사 생성자가 호출되는 경우
	CMyData b(a);
	a.SetData(20);
	cout << b.GetData() << endl;

	return 0;

} 


