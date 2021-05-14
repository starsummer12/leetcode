#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode *pre=nullptr;
    ListNode *cur=head;
    while(cur)
    {
        ListNode *h=cur->next;
        cur->next=pre;
        pre=cur;
        cur=h;
    }
    return pre;
}


int main() {
    ListNode *head;
    ListNode *link= reverseList(head);
    //省略输入输出
    return 0;
}
