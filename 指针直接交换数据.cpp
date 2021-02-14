#include <iostream>
using namespace std;

int swap(int * a,int * b)
{
	int mid = 0;
	mid = *a;
	*a = *b;
	*b = mid;
	return 0;
}

int main()
{
	int m = 4, n = 5;
	swap(&m, &n);
	printf("%d %d\n", m, n);
}