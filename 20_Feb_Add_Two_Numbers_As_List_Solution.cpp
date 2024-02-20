#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *A, ListNode *B)
{
    int rem = 0;
    ListNode *ans = NULL, *head = NULL;
    while (A && B)
    {
        int val = A->val + B->val + rem;
        ListNode *cur = new ListNode(val % 10);
        if (ans)
        {
            ans->next = cur;
            ans = ans->next;
        }
        else
        {
            ans = cur;
            head = ans;
        }
        rem = val / 10;
        A = A->next;
        B = B->next;
    }
    while (A)
    {
        int val = rem + A->val;
        ListNode *cur = new ListNode(val % 10);
        if (ans)
        {
            ans->next = cur;
            ans = ans->next;
        }
        else
        {
            ans = cur;
            head = ans;
        }
        rem = val / 10;
        A = A->next;
    }
    while (B)
    {
        int val = rem + B->val;
        ListNode *cur = new ListNode(val % 10);
        if (ans)
        {
            ans->next = cur;
            ans = ans->next;
        }
        else
        {
            ans = cur;
            head = ans;
        }
        rem = val / 10;
        B = B->next;
    }
    while (rem)
    {
        int val = rem;
        ListNode *cur = new ListNode(val % 10);
        if (ans)
        {
            ans->next = cur;
            ans = ans->next;
        }
        else
        {
            ans = cur;
            head = ans;
        }
        rem = val / 10;
    }
    return head;
}