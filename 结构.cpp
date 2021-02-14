#include <iostream>
using namespace std;

struct car
{
    int size;
    char name[20];
    char nature[20];
	car *next;//链表用到
};

int main()
{
    car horse = { {100},{"BMW"},{"SMALL"} };
    cout << horse.size;
    return 0;
}