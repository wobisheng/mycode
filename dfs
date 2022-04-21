#include <iostream>
#define MAX 6
using namespace std;

int map[MAX][MAX] = {
	{1,0,0,1,1,0},
	{1,0,1,1,0,0},
	{1,0,0,0,0,0},
	{1,0,1,1,1,0},
	{1,1,1,0,1,0},
	{1,1,1,0,1,1}
};
bool store[MAX+ 1][MAX + 1] = {0};
int temp[MAX + 1][MAX + 1] = {0};
void recursion(int x,int y,int dir)
{
	if (x == MAX - 1 && y == MAX - 1)
	{
		for (int i = 0; i < MAX; i++)
		{
			for (int j = 0; j < MAX; j++)
				printf("%d ", store[i][j]);
			printf("\n");
		}
		return;
	}
	if (x+1<MAX&&map[y][x + 1] == 1 && temp[y][x + 1] != 3&&store[y][x + 1] != 1)
	{
		store[y][x+1] = 1;
		recursion(x + 1, y,1);
	}
	if (y + 1 < MAX && map[y + 1][x] == 1 && temp[y + 1][x] != 3 && store[y+1][x] != 1)
	{
		store[y + 1][x] = 1;
		recursion(x, y + 1, 2);
	}
	if (y > 0 && map[y - 1][x] == 1 && temp[y-1][x] != 3 && store[y-1][x] != 1)
	{
		store[y-1][x] = 1;
		recursion(x, y - 1, 4);
	}
	if (x > 0 && map[y][x - 1] == 1 && temp[y][x - 1] != 3 && store[y][x - 1] != 1)
	{
		store[y][x - 1] = 1;
		recursion(x - 1, y, 3);
	}
	if (dir == 1&&x>=1 )
	{
		temp[y][x] = 3;
		store[y][x] = 0;
		x--;
	}
	if (dir == 2 && y>= 1)
	{
		store[y][x] = 0;
		temp[y][x] = 3;
		y--;
	}
	if (dir == 3 && x +1 <MAX)
	{
		temp[y][x] = 3;
		store[y][x] = 0;
		x++;
	}
	if (dir == 4 && y+ 1<MAX)
	{
		temp[y][x] = 3;
		store[y][x] = 0;
		y++;
	}
}

int main()
{
	recursion(0,0,1);
	return 0;
}
