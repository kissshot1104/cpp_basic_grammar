#include<iostream>
#include<tchar.h>
#include<string>

using namespace std;


namespace TEST1
{

	int test_data = 100;

	namespace TEST2
	{

		int test_data = 200;

		namespace TEST3 
		{

			int test_data = 300;

		}

	}

}
int _tmain() 
{

	cout << "namespace TEST1 : "<<TEST1::test_data << endl;
	cout << "namespace TEST2 : "<<TEST1::TEST2::test_data << endl;
	cout << "namespace TEST3 : "<<TEST1::TEST2::TEST3::test_data << endl;

	return 0;

}