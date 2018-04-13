#include <iostream>
using namespace std;

int main()
{
	int g = 1;
	for ( int f = g; g == 1; )
	{
		int y, m, d, y1, m1, d1, t, m2[13];
		cout << "请输入出生年份: ";
		cin >> y;
		cout << "请输入出生月份: ";
		cin >> m;
		cout << "请输入出生日期: ";
		cin >> d;
		cout << "请输入现在年份: ";
		cin >> y1;
		cout << "请输入现在月份: ";
		cin >> m1;
		cout << "请输入现在日期: ";
		cin >> d1;
		m2[1]	= 31;
		m2[2]	= 28;
		m2[3]	= 31;
		m2[4]	= 30;
		m2[5]	= 31;
		m2[6]	= 30;
		m2[7]	= m2[8] = 31;
		m2[9]	= 30;
		m2[10]	= 31;
		m2[11]	= 30;
		m2[12]	= 31;
		t	= (y1 - y - 1) * 365;
		if ( (1 <= m1 <= 12) && (1 <= m <= 12) && (1 <= d <= 31) && (1 <= d1 <= 31) )
		{
			for ( int a = y + 1; a < y1; a++ )
			{
				if ( a % 400 == 0 || (a % 4 == 0 && a % 100 != 0) )
				{
					t += 1;
				}
			}
			if ( y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0) )
			{
				if ( m1 == 2 )
				{
					t += 31 + 29 - d1;
				}else  {
					for ( int b = 1; b < m1; b++ )
					{
						t += m2[b];
					}
					t += d1 + 1;
				}
				{
				}
			}  else{
				if ( m1 == 2 )
				{
					t += 31 + 28 - d1;
				}else  {
					for ( int b = 1; b < m1; b++ )
					{
						t += m2[b];
					}
					t += d1;
				}
				{
				}
			}

			if ( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0) )
			{
				if ( m <= 2 )
				{
					for ( int c = m; c <= 12; c++ )
					{
						t += m2[c];
					}
					t += 1 - d;
				}else  {
					{
						for ( int c = m; c <= 12; c++ )
						{
							t += m2[c];
						}
						t += -d;
					}
				}
			}else  {
				if ( m <= 2 )
				{
					for ( int c = m; c <= 12; c++ )
					{
						t += m2[c];
					}
					t += -d;
				}else  {
					{
						for ( int c = m; c <= 12; c++ )
						{
							t += m2[c];
						}
						t += -d;
					}
				}
			}
			cout << "\n你已经来到了这个世界" << t << "天";
			cout << "\n如需重来请输1，其他数字停止计算" << "\n输入数字: ";
			cin >> g;
		}
	}
	return(0);
}
