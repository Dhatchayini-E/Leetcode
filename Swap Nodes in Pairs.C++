class Solution {
public:
    struct ListNode* swapPairs(struct ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        else
        {
            struct ListNode *first=head;
            struct ListNode *second=first->next;
            struct ListNode *third=swapPairs(second->next);
            second->next=first;
            first->next=third;
            return second;
        }
    }
};
