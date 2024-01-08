#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *swapPairs(ListNode *A)
{
    if (!A || !(A->next))
        return A;
    ListNode *ans = NULL, *prev = NULL, *cur = A;
    while (cur && cur->next)
    {
        ListNode *next = cur->next->next;
        ListNode *temp = cur->next;
        if (prev)
            prev->next = temp;
        cur->next = next;
        temp->next = cur;
        prev = cur;
        if (!ans)
            ans = temp;
        cur = next;
    }
    return ans;
}
