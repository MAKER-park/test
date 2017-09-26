// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	//char형 포인터 배열
	char *ptr[3] = { "abc","abd","ccc" };
	cout << "&ptr[0] =" << (int)&ptr[0]<<endl;
	cout << "&ptr[0] =" << *ptr[0] << endl;
	cout << "&ptr[0] =" << ptr[0] << endl;
    return 0;
}

