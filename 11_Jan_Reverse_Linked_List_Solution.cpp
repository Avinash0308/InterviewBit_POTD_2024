#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* Solution::reverseList(ListNode* A) {
    if(!A || !(A->next)) return A;
    ListNode* prev = NULL;
    ListNode* cur = A;
    while(cur){
        ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
