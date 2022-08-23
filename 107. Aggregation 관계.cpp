#include<stdlib.h>
#include<iostream>
#include<tchar.h>
using namespace std;


//자료구조 클래스
class CNode
{
	//friend 클래스 선언
	friend class CMyList;

private:

	//단일 연결 리스트로 관리할 데이터
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


//UI 클래스
class CMyUI
{
private:
	//UI 클래스 내부에 자료구조가 포함된다.
	CMyList &m_list;
public:
	//참조 멤버는 반드시 초기화 목록을 이용해 초기화해야한다.
	CMyUI(CMyList& rList) : m_list(rList) {}

	//메뉴 출력 및 사용자 입력 확인
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
				cout << "이름 : ";
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