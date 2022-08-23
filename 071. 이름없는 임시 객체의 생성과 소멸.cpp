#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTestData 
{

private:
	int m_nData =0;

	//변수 이름을 저장하기 위한 멤버
	const char* m_pszName = nullptr;
public:
	CTestData(int nParam, const char* pszName) : m_nData(nParam), m_pszName(pszName) 
	{
		cout << "CTestData(): " << this->CTestData::m_pszName << endl;
	}

	CTestData(int a) :m_nData(a) 
	{
		cout << "CTestData(): " << this->CTestData::m_pszName << endl;
		
	}

	~CTestData() 
	{
		cout << "~CTestData(): " << this->CTestData::m_pszName << endl;
	}

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) 
	{
		cout << "CTestData(const CTestData &): " << this->CTestData::m_pszName << endl;
	}

	CTestData& operator=(const CTestData& rhs) 
	{
		cout << "operator=" << endl;
		//값은 변경하지만 이름(m_pszName)은 그대로 둔다.
		this->CTestData::m_nData = rhs.m_nData;

		return *this;
	}

	int GetData() const { return this->CTestData::m_nData; }

	void SetData(int nParam) { this->CTestData::m_nData = nParam; }



};

CTestData TestFunc(int nParam) 
{
	//CTestData 클래스 인스턴스인 a는 지역 변수다.
	//따라서 함수가 반환되면 소멸한다.
	CTestData a(nParam,"a");
	cout << "return" << endl;
	return a;
}

int _tmain() 
{

	//CTestData b(5, "b");
	cout << "*****Befor*******" << endl;

	//함수가 반환되면서 임시 객체가 생성됐다가 대입 연산 후 즉시 소멸한다.
	//	b = TestFunc(10);
	TestFunc(10);
	cout << "*****After*****" << endl;
	//cout << b.GetData() << endl;


}