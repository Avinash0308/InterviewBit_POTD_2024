#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverse(ListNode *A, ListNode *prev)
{
    ListNode *next = A->next;
    A->next = prev;
    if (next == NULL)
    {
        return A;
    }
    else
    {
        return reverse(next, A);
    }
}
ListNode *reverseList(ListNode *A)
{
    if (!A || !(A->next))
        return A;
    return reverse(A, NULL);
}

int main()
{
    return 0;
}