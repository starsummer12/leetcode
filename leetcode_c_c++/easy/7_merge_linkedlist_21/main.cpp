#include <bits/stdc++.h>
using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode *pre=new ListNode(-1);
    ListNode *p=pre;
    while(l1!=nullptr&&l2!=nullptr)
    {
        if(l1->val<l2->val)
        {
            p->next=l1;
            l1=l1->next;
        }else
        {
            p->next=l2;
            l2=l2->next;
        }
        p=p->next;
    }
    p->next==l1;
    if(l1==nullptr)
    {
        p->next=l2;
    }else
    {
        p->next=l1;
    }
    return pre->next;
}
int main() {
    ListNode *l1,*l2;
    ListNode *ln=mergeTwoLists(l1,l2);
    return 0;
}
