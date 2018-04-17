#include <iostream>
using namespace std;

int main()
{
int y,m,d,t,mouth[13];
cout << "请输入初始年份: ";
cin >> y;
cout << "请输入初始月份: ";
cin >> m;
cout << "请输入初始天份: ";
cin >> d;
cout << "请输入加的天数: ";
cin >> t;
mouth[1] = 31;
mouth[2] = 28;
mouth[3] = 31;
mouth[4] = 30;
mouth[5] = 31;
mouth[6] = 30;
mouth[7] = 31;
mouth[8] = 31;
mouth[9] = 30;
mouth[10] = 31;
mouth[11] = 30;
mouth[12] = 31;
  if(t>0)
  {
for(int a = 1 ; a <= t; a ++)
  { if(y%400==0||(y%4==0&&y%100!=0))
   {
   mouth[2] = 29;
   }
   else
   {
   mouth[2] = 28;
   }
  if(d==mouth[m])
   {
   	d = 0;
   	m += 1;
   }
   if(m==13)
   {
   	m = 1;
   	y += 1;
   }
   d += 1;
  }
  }
  else
  {
  for(int a = t +1 ; a <= 0; a ++)
  {
  d += -1;	if(y%400==0||(y%4==0&&y%100!=0))
   {
   mouth[2] = 29;
   }
   else
   {
   mouth[2] = 28;
   }
      if(m==0)
   {
   	m = 12;
   	y += -1;
   }
  if(d==0)
   {
   	d = mouth[m];
   	m += -1;
   }
  }
  }
  cout << t << "天后为" << y << "年" << m << "月" << d << "日";
  return 0; 
}
