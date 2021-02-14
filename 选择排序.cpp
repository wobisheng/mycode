#include <iostream>
using namespace std;
#define NUM 100

void px(int num[], int n)
{
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        t = num[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (num[j] <= num[i])
            {
                num[i] = num[j];
                num[j] = t;
                t = num[i];
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