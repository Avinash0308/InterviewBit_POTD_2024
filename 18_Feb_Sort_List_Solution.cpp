#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *middle(ListNode *h)
{
    ListNode *a = h;
    ListNode *b = h->next;
    while (b && b->next)
    {
        a = a->next;
        b = b->next->next;
    }
    return a;
}
ListNode *merge(ListNode *a, ListNode *b)
{
    ListNode *res;
    ListNode *head = NULL;
    if (!a)
        return b;
    if (!b)
        return a;
    while (a && b)
    {
        if (a->val < b->val)
        {
            if (head)
            {
                res->next = a;
                res = res->next;
                a = a->next;
                res->next = NULL;
            }
            else
            {
                head = a;
                a = a->next;
                head->next = NULL;
                res = head;
            }
        }
        else
        {
            if (head)
            {
                res->next = b;
                res = res->next;
                b = b->next;
                res->next = NULL;
            }
            else
            {
                head = b;
                b = b->next;
                head->next = NULL;
                res = head;
            }
        }
    }
    if (a)
        res->next = a;
    if (b)
        res->next = b;
    return head;
}
ListNode *sort(ListNode *h)
{
    if (!h || !(h->next))
        return h;
    ListNode *mid = middle(h);
    ListNode *sec = mid->next;
    mid->next = NULL;
    return merge(sort(h), sort(sec));
}
ListNode *sortList(ListNode *A)
{
    return sort(A);
}
