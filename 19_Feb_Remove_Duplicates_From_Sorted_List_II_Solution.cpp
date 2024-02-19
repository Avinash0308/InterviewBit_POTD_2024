#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode deleteDuplicates(ListNode *A)
{
    if (!A || !(A->next))
        return A;
    ListNode *cur = A;
    ListNode *prev = NULL;
    ListNode *head = NULL;
    while (cur && cur->next)
    {
        if (cur->next->val == cur->val)
        {
            while (cur->next && cur->next->val == cur->val)
                cur = cur->next;
            cur = cur->next;
        }
        else
        {
            if (prev)
            {
                prev->next = cur;
                prev = prev->next;
                cur = cur->next;
                prev->next = NULL;
            }
            else
            {
                head = cur;
                cur = cur->next;
                head->next = NULL;
                prev = head;
            }
        }
    }
    if (cur)
    {
        if (prev)
            prev->next = cur;
        else
            return cur;
        return head;
    }
    return head;
}
