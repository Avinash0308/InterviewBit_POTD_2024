#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int find_length(ListNode *A)
{
    int ans = 0;
    while (A)
    {
        ans++;
        A = A->next;
    }
    return ans;
}
ListNode* removeNthFromEnd(ListNode *A, int B)
{
    int len = find_length(A);
    int tra = len - B;
    tra = max(tra, 0);
    if (tra == 0)
    {
        ListNode *ans = A->next;
        A->next = NULL;
        delete (A);
        return ans;
    }
    tra--;
    ListNode *ans = A;
    while (tra--)
        ans = ans->next;
    ListNode *del = ans->next;
    ans->next = ans->next->next;
    delete (del);
    return A;
}
