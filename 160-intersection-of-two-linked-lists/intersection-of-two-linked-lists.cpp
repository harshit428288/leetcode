class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int countA = 0;
        int countB = 0;

        ListNode* currA = headA;
        ListNode* currB = headB;

        // Count length of List A
        while(currA != NULL)
        {
            countA++;
            currA = currA->next;
        }

        // Count length of List B
        while(currB != NULL)
        {
            countB++;
            currB = currB->next;
        }

        // Reset pointers
        currA = headA;
        currB = headB;

        // Move the longer list ahead
        int diff = abs(countA - countB);

        if(countA > countB)
        {
            while(diff--)
            {
                currA = currA->next;
            }
        }
        else
        {
            while(diff--)
            {
                currB = currB->next;
            }
        }

        // Traverse together
        while(currA != NULL && currB != NULL)
        {
            if(currA == currB)
            {
                return currA;
            }

            currA = currA->next;
            currB = currB->next;
        }

        return NULL;
    }
};