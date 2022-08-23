//char[12]배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하시오
#include<iostream>
#include<tchar.h>


int _tmain() 
{

	char* new_arr = new char[12];

	delete[]new_arr;

}