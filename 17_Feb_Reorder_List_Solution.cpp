#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int length(ListNode *A)
{
    if (!A)
        return 0;
    int cnt = 0;
    while (A)
    {
        A = A->next;
        cnt++;
    }
    return cnt;
}
ListNode *reverse(ListNode *h)
{
    if (!h || !(h->next))
        return h;
    ListNode *prev = NULL;
    while (h)
    {
        ListNode *next = h->next;
        h->next = prev;
        prev = h;
        h = next;
    }
    return prev;
}
ListNode *reorderList(ListNode *A)
{
    int len = length(A);
    int half = (len - 1) / 2;
    ListNode *h = A;
    while (half--)
        h = h->next;
    ListNode *sec = h->next;
    h->next = NULL;
    h = reverse(sec);
    ListNode *n = A;
    while (h)
    {
        ListNode *next = n->next;
        n->next = h;
        h = h->next;
        n->next->next = next;
        n = next;
    }
    return A;
}
