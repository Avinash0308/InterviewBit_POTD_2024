#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    if(!A) return B;
    if(!B) return A;
    ListNode* ans = NULL;
    ListNode* cur = NULL;
    ListNode* h1 = A , *h2 = B;
    while(h1 && h2){
        if(h1->val <= h2->val){
            if(cur) {cur->next = h1; cur = cur->next;}
            else {ans = h1; cur = h1;}
            h1 = h1->next;
        }
        else{
            if(cur) {cur->next = h2; cur = cur->next;}
            else {ans = h2; cur = h2;}
            h2 = h2->next;
        }
    }
    if(h1) cur->next = h1;
    else if(h2) cur->next = h2;
    return ans;
}
