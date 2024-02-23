#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *insertionSortList(ListNode *head_ref)
{
    if (!head_ref || !(head_ref->next))
        return head_ref;
    ListNode *cur = head_ref, *head = head_ref;
    head_ref = head_ref->next;
    while (head_ref)
    {
        ListNode *next = head_ref->next;
        if (head_ref->val >= cur->val)
        {
            cur->next = head_ref;
            cur = cur->next;
            cur->next = NULL;
        }
        else if (head_ref->val <= head->val)
        {
            head_ref->next = head;
            head = head_ref;
        }
        else
        {
            ListNode *traverse = head;
            while (traverse->next && traverse->next->val < head_ref->val)
            {
                traverse = traverse->next;
            }
            ListNode *p = traverse->next;
            traverse->next = head_ref;
            traverse->next->next = p;
        }
        cur->next = NULL;
        head_ref = next;
    }
    return head;
}

int main()
{

    return 0;
}