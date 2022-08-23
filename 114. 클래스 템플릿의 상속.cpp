#include<iostream>
#include<tchar.h>

using namespace std;

template<typename T>
class CMyData 
{
public:
	CMyData() {};
protected:
	T m_Data;
};


template<typename T>
class CMyDataEx : public CMyData<T>
{
public:
	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param; }
};


int _tmain() 
{
	CMyDataEx<int> a;
	a.SetData(5);
	cout << a.GetData() << endl;


	return 0;
}


