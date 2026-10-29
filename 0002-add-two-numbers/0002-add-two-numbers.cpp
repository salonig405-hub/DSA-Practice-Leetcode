/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return func(l1,l2,0);
    }
        ListNode* func(ListNode* l1, ListNode* l2,int carry)
    {
        if(l1==NULL && l2==NULL && carry==0)
            return NULL;
        int sum=carry;
        if(l1!=NULL)
        {
            sum+=l1->val;
            l1=l1->next;
        }
 
        if(l2!=NULL)
        {
            sum+=l2->val;
            l2=l2->next;
        }
        ListNode* node=new ListNode(sum%10);
        node->next=func(l1, l2, sum/10);
        return node;
    }
    
};