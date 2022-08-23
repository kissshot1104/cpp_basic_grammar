#include<iostream>
#include<tchar.h>
using namespace std;


//'T'�� �ڷ����� �ȴ�.
template<typename T>
class CMyData 
{
private:
	//T ������ ��� ���� ����
	T m_Data;

public:
	CMyData(const T param) : m_Data(param) {}
	T GetData() const { return m_Data; }

	//���Ŀ� ���� ��ȯ�� ����
	operator T() { return m_Data; }
	void SetData(T param) { m_Data = param; };
};


int _tmain() 
{

	CMyData<int> a(5);
	cout << a << endl;
	CMyData<double> b(123.45);
	cout << b << endl;

	//���ڿ��� �����ϱ� ���� �޸𸮸� ������ �Ҵ����� �ʴ´�.
	CMyData<char*>c("Hello");
	cout << c << endl;

	return 0;

}