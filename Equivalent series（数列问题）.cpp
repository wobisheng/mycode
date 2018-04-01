#include <iostream>
#include <math.h>
#include <conio.h>
using  namespace std;

int main()
{
	float s,b,c,z;
	int n,e,z1,g;
	for( int g=1 ; g==1 ; )
	{
	cout << "\n输入1为等差数列\n" << "输入2为等比数列\n请勿输入运算符，否则会错误\n" << "请输入:";
	cin >> z1;
	for( ; z1>2||z1<=0 ; )
	{
		cout << "数字有误请重试:";
	    cin >> z1;
	}
	if(z1==1)
	{
	cout << "\t本数列计算器仅可以计算等差数列,采用for函数\n\f";
	cout << "输入公差: ";
	cin >> b;
	cout << "输入常数: ";
	cin >> c;
	cout << "输入计算的项数: ";
	cin >> e;
	cout << "结果为: ";
	for(int n=1;n<=e;n=n+1)
	{
		s = b*n+c;
		cout << s << "  ";
	}
	z = (e*(b+c+e*b+c))/2;
	cout << "\n\n前" << e << "项的和为: " << z;
}
else
{
cout << "\t本数列计算器仅可以计算等比数列,采用for函数\n\f";
cout << "请输入公比q: ";
cin >> b;
cout << "请输入a1的值: ";
cin >> c;
cout << "请输入计算项数: ";
cin >> e;
cout << "结果为:";
	for(int n=1;n<=e;n=n+1)
	{
		s = c*pow(b,n-1);
		cout << s << "  ";
	}
z = c*(1-pow(b,e))/(1-b);
cout << "\n前" << e << "项的和为" << z;
}
cout << "\n\t计算完毕,如需重新开始请输1，其他数字结束运算: ";
cin >> g;
}
getch();
}
