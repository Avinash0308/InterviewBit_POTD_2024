#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

 int get_size(ListNode* h){
     int a = 0;
     while(h){
         h = h->next;
         a++;
     }
     return a;
 }
ListNode* rotateRight(ListNode* A, int B) {
    int len = get_size(A);
    B %= len;
    if(B == 0) return A;
    int mov = len - B - 1;
    ListNode* cur = A;
    while(mov--){
        cur = cur->next;
    }
    ListNode* head = cur->next;
    cur->next = NULL;
    cur = head;
    while(cur->next) cur = cur->next;
    cur->next = A;
    return head;
}
