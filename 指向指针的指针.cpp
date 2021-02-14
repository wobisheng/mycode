#include <iostream>
using namespace std;

int main()
{
    int** p;
    int* a;
    int n = 1234;
    a = &n;
    p = &a;
    printf("%d %d %d\n",p, a, n);
    return 0;
}