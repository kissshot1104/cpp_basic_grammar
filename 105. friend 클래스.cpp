#include<iostream>
#include<tchar.h>
using namespace std;

class CNode 
{
	//friend Ŭ���� ����
	friend class CMyList;
private:
	//���� ���� ����Ʈ�� ������ ������
	char m_szName[32];
	CNode* pNext = nullptr;
public:
	explicit CNode(const char* pszName) 
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}
};

class CMyList 
{
private:
	CNode m_HeadNode;
public:
	CMyList() : m_HeadNode("Dummy Head"){}
	~CMyList() {
		CNode* pNode = m_HeadNode.pNext;
		CNode* pDelete = nullptr;

		while (pNode) 
		{
			pDelete = pNode;
			pNode = pNode->pNext;

			cout << pDelete->m_szName << endl;
			delete pDelete;
		}
		m_HeadNode.pNext = nullptr;
	}

	void AddNewNode(const char* pszName) 
	{
		CNode* pNode = new CNode(pszName);


		//����Ʈ�� ���ο� ��带 �߰�
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}

};

int _tmain() 
{
	CMyList list;
	list.AddNewNode("�浿");
	list.AddNewNode("ö��");
	list.AddNewNode("����");

	return 0;
}