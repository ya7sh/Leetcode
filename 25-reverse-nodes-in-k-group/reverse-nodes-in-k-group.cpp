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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        ListNode* temp=head;
        int cn=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            cn++;
        }
        if(cn<k)
            return head;
        ListNode*prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=NULL;
        int c=0;
        while(c<k && curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            c++;
        }
        if(nxt!=NULL)
            head->next=reverseKGroup(nxt,k);
        
            return prev;
    }

};