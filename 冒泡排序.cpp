#include <iostream>
using namespace std;
#define NUM 100

void px(int num[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (num[j + 1] < num[j])
            {
                int t = num[j+1];
                num[j + 1] = num[j];
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