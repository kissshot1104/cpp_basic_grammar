#include<stdlib.h>
#include<iostream>
#include<tchar.h>
using namespace std;


//�ڷᱸ�� Ŭ����
class CNode
{
	//friend Ŭ���� ����
	friend class CMyList;

private:

	//���� ���� ����Ʈ�� ������ ������
	char m_szName[32];
	CNode* m_pNext = nullptr;

public:
	explicit CNode(const char* pszName)
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}

};

class CMyList
{
private:

	CNode* m_HeadNode = new CNode("dummy");

public:

	CMyList() {};
	~CMyList()
	{
		CNode* pNode = m_HeadNode->m_pNext;
		CNode* pDelete = nullptr;

		while (pNode)
		{
			pDelete = pNode;
			pNode = pNode->m_pNext;

			cout << pDelete->m_szName << endl;

			delete pDelete;

		}

		m_HeadNode = nullptr;

	}

	void New_Node(const char* pszName)
	{
		CNode* pNode = new CNode(pszName);

		pNode->m_pNext = m_HeadNode->m_pNext;
		m_HeadNode->m_pNext = pNode;

	}

	void Print()
	{
		CNode* pNode = m_HeadNode->m_pNext;

		while (pNode)
		{
			cout << pNode->m_szName << endl;
			pNode = pNode->m_pNext;
		}
	}
};


//UI Ŭ����
class CMyUI
{
private:
	//UI Ŭ���� ���ο� �ڷᱸ���� ���Եȴ�.
	CMyList &m_list;
public:
	//���� ����� �ݵ�� �ʱ�ȭ ����� �̿��� �ʱ�ȭ�ؾ��Ѵ�.
	CMyUI(CMyList& rList) : m_list(rList) {}

	//�޴� ��� �� ����� �Է� Ȯ��
	int PrintMenu()
	{
		int nInput = 0;

		system("cls");
		cout << "[1]Add\t" << "[2]Print\t" << "[0]Exit\n:";
		cout.flush();

		cin >> nInput;

		return nInput;
	}

	void Run()
	{
		char szName[32];
		int nInput = 0;

		while ((nInput = PrintMenu()) > 0)
		{
			switch (nInput)
			{
			case 1:		//Add
				cout << "�̸� : ";
				cout.flush();
				cin >> szName;
				m_list.New_Node(szName);
				break;

			case 2:		//Print
				m_list.Print();
				break;

			default:
				break;
			}
		}
	}
};


int _tmain()
{
	CMyList list;
	CMyUI ui(list);
	
	ui.Run();
	return 0;


}