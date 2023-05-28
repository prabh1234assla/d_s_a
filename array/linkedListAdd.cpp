#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

int max(int a, int b){
    return a > b ? a : b;
}

int length(ListNode* l){
    int length = 0;
    
    ListNode* L = l;
    while(L != NULL){
        L = L->next;
        ++length;
    }

    return length;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int len1 = max(length(l1), length(l2));
    ListNode* l3[len1];

    for(int i=0; i<len1; ++i)
        l3[i] = (ListNode*) malloc(sizeof(ListNode));

    for(int i=0; i<len1-1; ++i){
        l3[i]->val = 0;
        l3[i]->next = l3[i+1];
    }

    l3[len1-1]->val = 0;
    l3[len1-1]->next = NULL;

    ListNode* ptr1 = l1;
    ListNode* ptr2 = l2;
    ListNode* ptr3 = l3[0];

    int carry = 0;

    while(ptr1!=NULL && ptr2!=NULL){
        ptr3->val = (ptr1->val + ptr2->val + carry)%10;
        carry = (ptr1->val + ptr2->val + carry)/10;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    if(ptr1==NULL){
        while(ptr2!=NULL){
            ptr3->val = (carry + ptr2->val)%10;
            carry = (carry + ptr2->val)/10;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
    }

    if(ptr2==NULL){
        while(ptr1!=NULL){
            ptr3->val = (carry + ptr1->val)%10;
            carry = (carry + ptr1->val)/10;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
    }

    if(carry){
        ListNode* newptr = (ListNode*) malloc(sizeof(ListNode));
        l3[len1-1]->next = newptr;
        newptr->val = carry;
        newptr->next = NULL;
    }

    return l3[0];
}

int main(){
    ListNode* l[7];
    int a[] = {3, 7};

    for(int i=0; i<sizeof(a)/sizeof(a[0]); ++i)
        l[i] = (ListNode*) malloc(sizeof(ListNode));

    for(int i=0; i<sizeof(a)/sizeof(a[0])-1; ++i){
        l[i]->val = a[i];
        l[i]->next = l[i+1];
    }

    l[sizeof(a)/sizeof(a[0])-1]->val = a[sizeof(a)/sizeof(a[0])-1];
    l[sizeof(a)/sizeof(a[0])-1]->next = NULL;

    ListNode* ll[4];
    int aa[] = {9, 2};

    for(int i=0; i<sizeof(aa)/sizeof(aa[0]); ++i)
        ll[i] = (ListNode*) malloc(sizeof(ListNode));

    for(int i=0; i<sizeof(aa)/sizeof(aa[0])-1; ++i){
        ll[i]->val = aa[i];
        ll[i]->next = ll[i+1];
    }
    ll[sizeof(aa)/sizeof(aa[0])-1]->val = aa[sizeof(aa)/sizeof(aa[0])-1];
    ll[sizeof(aa)/sizeof(aa[0])-1]->next = NULL;

    ListNode* l3 = addTwoNumbers(l[0], ll[0]);
    ListNode* l4 = l3;

    while(l4 != NULL){
        cout << l4->val << " ";
        l4 = l4->next;
    }

    return 0;
}