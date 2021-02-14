#include <iostream>
using namespace std;
#define NUM 100

int main()
{
    int num[NUM] = { 0 };
    bool cache[NUM] = { 0 };
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        cache[num[i]] = 1;
    }

    for (int i = 0; i <= NUM; i++)
    {
        if (cache[i] == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}