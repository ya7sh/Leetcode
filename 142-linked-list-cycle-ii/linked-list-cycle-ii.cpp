/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL && fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            else
                break;
            slow=slow->next;

            if(fast==slow)
            {
                ListNode* temp=head;
                while(temp!=slow)
                {
                    temp=temp->next;
                    slow=slow->next;
                }

                return slow;
            }
        }
        return NULL;
    }
};