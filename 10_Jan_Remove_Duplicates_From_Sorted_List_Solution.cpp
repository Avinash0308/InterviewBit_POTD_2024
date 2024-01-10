#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* A) {
    if(!A || !(A->next)) return A;
    ListNode* cur = A;
    while(A->next){
        if(A->val == A->next->val) A->next = A->next->next;
        else A = A->next;
    }
    return cur;
}
