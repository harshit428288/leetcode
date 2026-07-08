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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy ->next =head;

        ListNode* curr=head;
        ListNode* pev=dummy;

        while(curr!=NULL)
        {
            if(curr->val == val)
            {
                pev->next=curr->next;
            }
            else
            {
                pev=curr;
            }

            curr=curr->next;
        }

    return dummy->next;
        
    }
};