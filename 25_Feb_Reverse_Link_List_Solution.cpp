#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};
ListNode *reverseBetween(ListNode *A, int B, int C)
{
    ListNode *prev, *start;
    if (B == 1)
    {
        prev = NULL;
        start = A;
    }
    else
    {
        prev = A;
        for (int i = 2; i < B; i++)
        {
            prev = prev->next;
        }
        start = prev->next;
    }
    ListNode *store = start;
    ListNode *connect = NULL;
    for (int i = B; i <= C; i++)
    {
        ListNode *next = start->next;
        start->next = connect;
        connect = start;
        start = next;
    }
    store->next = start;
    if (prev)
    {
        prev->next = connect;
    }
    else
    {
        A = connect;
    }
    return A;
}
