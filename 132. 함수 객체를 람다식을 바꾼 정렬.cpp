/*#include<iostream>
#include<functional>
#include<tchar.h>
using namespace std;

//������ �ڵ�
class CTestData 
{
private:
	int m_array[5];

public:
	CTestData() 
	{
		m_array[0] = 30;
		m_array[1] = 10;
		m_array[2] = 50;
		m_array[3] = 20;
		m_array[4] = 40;
	}

	void Print() 
	{
		for (auto& n : m_array)
			cout << n << '\t';

		cout << endl;
	}

	//�迭�� �����Ѵ�.
	//�Լ��� �Ű������� ���ٽ��� ���� �� �ִ� Function Ŭ������.
	void Sort(function<int(int, int)>cmp) 
	{
		int nTmp;

		for (int i = 0; i < 4; i++) 
		{
			for (int j = i + 1; j < 5; j++) 
			{
				if (cmp(m_array[i], m_array[j]) < 0)
				{
					nTmp = m_array[i];
					m_array[i] = m_array[j];
					m_array[j] = nTmp;
				}
			}
		}
	}
};


//����� �ڵ�
int _tmain() 
{

	//�������� ���� �� ���
	CTestData data;
	data.Sort([](int a, int b)->int {return a - b; });
	data.Print();


	//�������� ���� �� ���
	data.Sort([](int a, int b)->int {return b - a; });
	data.Print();


	return 0;


}*/


#include<iostream>
#include<functional>
#include<tchar.h>
using namespace std;

class CArrData 
{

private:
	int m_array[5];

public:
	CArrData()
	{
		m_array[0] = 30;
		m_array[1] = 50;
		m_array[2] = 10;
		m_array[3] = 40;
		m_array[4] = 20;
	}
	void PrintArr() 
	{
		for (auto& n : m_array)
			cout << n << '\t';
		cout<<endl;
	}

	void sort(function<int(int,int)>param) 
	{
		int n_tmp = 0;

		for (int i = 0; i < 5; i++)
		{
			for (int j = i + 1; j < 5; j++) 
			{

				if (param(m_array[i], m_array[j]) < 0) 
				{
					n_tmp = m_array[i];
					m_array[i] = m_array[j];
					m_array[j] = n_tmp;
				}

			}
		}
		
	}

};

int _tmain() 
{

	CArrData AD;
	auto Desc = [](int x, int y)-> int
	{
		return x - y;
	};


	AD.sort(Desc);
	AD.PrintArr();
}