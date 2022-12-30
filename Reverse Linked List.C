struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL, *curr=head, *nextnode=NULL;
    while(curr){
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;

}
