#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int m[12];
	m[0] = 0;
	m[1] = 1;
	m[2] = 2;
	m[3] = 3;
	m[4] = 4;
	m[5] = 5;
	m[6] = 6;
	m[7] = 7;
	m[8] = m[1];
	m[9] = m[2];
	m[10] = m[3];
	m[11] = m[4];
	for(int b = 1 ; b<=7 ; b ++)
	{
		cout << "today is " << m[b] << endl;
	}
	cout << endl;
	for(int a = 1 ; a<=7 ; a ++)
	{
	   m[a] = m[a+3];
		cout << "plus three is " << m[a] << endl;
	}
	getch();
}
