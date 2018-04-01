#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float dert,x1,x2,a,b,c;
	cout << "请输入a,b,c" << endl;
	cin >> a>> b >>c;
	dert = b*b-4*a*c;
	if(dert>=0)
	{
	x1 =( -b+sqrt(b*b-4*a*c))/2*a;
	x2 = (-b-sqrt(b*b-4*a*c))/2*a;
	cout << x1 << " and " << x2;
	}
	else
	cout << "no answer";
	
}
