#include<iostream>
#include<tchar.h>
using namespace std;

class CNode 
{
	//friend 클래스 선언
	friend class CMyList;
private:
	//단일 연결 리스트로 관리할 데이터
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


		//리스트에 새로운 노드를 추가
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}

};

int _tmain() 
{
	CMyList list;
	list.AddNewNode("길동");
	list.AddNewNode("철수");
	list.AddNewNode("영희");

	return 0;
}