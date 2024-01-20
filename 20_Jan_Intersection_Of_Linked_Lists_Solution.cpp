#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int length(ListNode* A){
    if(!A) return 0;
    return 1 + length(A->next);
}
ListNode* getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len1 = length(A);
    int len2 = length(B);
    while(len1 > len2){
        A = A->next;
        len1--;
    }
    while(len2 > len1){
        B = B->next;
        len2--;
    }
    while(A && B){
        if( A == B) return A;
        A = A->next;
        B = B->next;
    }
    return NULL;
}
