#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *partition(ListNode *A, int B)
{
    if (!A)
        return A;

    ListNode *fake1 = new ListNode(0);
    ListNode *fake2 = new ListNode(0);
    fake1->next = A;

    ListNode *p = A, *prev = fake1, *p2 = fake2;

    while (p)
    {
        if (p->val < B)
        {
            p = p->next;
            prev = prev->next;
        }
        else
        {
            p2->next = p;
            prev->next = p->next;

            p = prev->next;
            p2 = p2->next;
        }
    }
    p2->next = NULL;
    prev->next = fake2->next;

    return fake1->next;
    ListNode *i, *j, *toDelNode;
    int temp;
    i = A, j = A;
    while (i && j && j->next)
    {
        if (j->next->val < B)
        {
            toDelNode = j->next;
            j->next = toDelNode->next;
            toDelNode->next = i;
            i->next = toDelNode;
            i = i->next;
        }
        if (j)
        {
            j = j->next;
        }
    }
    return A;
}
