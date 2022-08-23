//다음 코드에서 잘못된 점은 무엇이며 문법 오류를 피하려면 어떻게 수정해야 하는지 답하세요
#include<iostream>
#include<tchar.h>
#include<string>
class CRefTest 
{

private:
	int m_nData;
	//int& m_nData;		<-이걸을 바꾼다.

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