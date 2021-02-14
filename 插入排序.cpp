#include <iostream>
using namespace std;
#define NUM 100

void px(int num[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (num[i] <= num[j])
            {
                int t = num[i];
                for (int m = i ; m > j; m--)
                {
                    num[m] = num[m - 1];
                }
                num[j] = t;
            }
        }
    }
}

int main()
{
    int num[NUM] = { 0 };
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
    }
    px(num, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}