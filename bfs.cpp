#include <iostream>
#include <queue>

using namespace std;

#define MAX 10//MAX为地图大小

int a[MAX][MAX] = {
    {1,1,1,1,1,1,1,1,1,1},
    {0,1,1,0,0,0,1,0,1,1},
    {0,1,1,1,0,0,1,1,1,1},
    {0,1,0,0,0,0,1,0,0,0},
    {0,1,1,1,1,1,0,0,0,0},
    {0,1,1,0,1,1,1,0,0,0},
    {0,1,0,0,1,1,1,0,0,0},
    {0,1,1,0,0,0,1,0,0,0},
    {0,1,0,0,0,1,1,0,0,0},
    {0,1,1,0,0,1,1,1,1,1},
};//地图，1为可走，0不可走
int b[MAX][MAX] = { 0 };//记录数组
int temp;
int sum;

struct location 
{
    int x;
    int y;
    int store[100][100];
};

queue<location> que;

void judge()
{
    while(!que.empty())
    {
        int x = que.front().x, y = que.front().y;
        que.front().store[x][y] = 1;
        b[x][y] = 1;
        if (x == MAX - 1 && y == MAX - 1)
        {
            for (int i = 0; i <= MAX - 1; i++)
            {
                for (int j = 0; j <= MAX - 1; j++)
                    printf("%d  ", que.front().store[i][j]);
                printf("\n");
            }
            printf("\n");
        }
        if ((y + 1 < MAX) && (a[x][y+1]) && (!b[x][y + 1]))
        {
            que.front().y = y + 1;
            que.front().x = x;
            que.push(que.front());
        }
        if ((x + 1 < MAX) && (a[x + 1][y]) && (!b[x + 1][y]))
        {
            que.front().x = x + 1;
            que.front().y = y;
            que.push(que.front());
        }
        if ((y > 0) && a[x][y-1] != 0 && b[x][y - 1] != 1)
        {
            que.front().y = y - 1;
            que.front().x = x;
            que.push(que.front());
        }
        if ((x > 0) && a[x-1][y] != 0 && b[x - 1][y] != 1)
        {
            que.front().x = x - 1;
            que.front().y = y;
            que.push(que.front());
        }
        que.pop();
    };
    return;
}

int main()
{
    location *first = (location*)malloc(sizeof(location));
    first->x = 0;
    first->y = 0;
    for (int i = 0; i <= MAX; i++)
        for (int j = 0; j <= MAX; j++)
            first->store[i][j] = 0;
    //不懂为什么申请了内存空间后，struct里面数组初始化无效所以只能在这里用for初始化了
    first->store[0][0] = 1;
    que.push(*first);
    judge();
    return 0;
}
