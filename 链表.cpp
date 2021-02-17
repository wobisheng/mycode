#include <iostream>
using namespace std;

struct node {
    int x;
    int y;
    node* next;
};

struct list {
    node* start;
    node* rear;
    int count;
};

void ini(list **plist)
{
    (*plist) = (list*)malloc(sizeof(list));
    (*plist)->count = 0;
}

void insert(node *pnode,list*plist)
{
    pnode->x = rand() % 10;
    pnode->y = 99;
    if (plist->count != 0)
    {
        pnode->next = plist->start;
        plist->start = pnode;
        plist->count++;
    }
    else
    {
        pnode->next = NULL;
        plist->rear = pnode;
        plist->start = pnode;
        plist->count = 1;
    }
}

void out(node* pnode, list* plist)
{
    node* out;
    out = plist->start;
    printf("%d %d\n", out->x, out->y);
    for (int i = 1; i < plist->count; i++)
    {
        out = out->next;
        printf("%d %d\n", out->x, out->y);
    }
}

int main()
{
    list* plist;
    ini(&plist);
    node* pnode;

    for (int i = 0; i <= 9; i++)
    {
        pnode = (node*)malloc(sizeof(node));
        insert(pnode, plist);
    }
    out(pnode, plist);
    cout << plist->count;
    system("pause");
    return 0;
}