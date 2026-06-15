class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL; 
        ListNode* curr = head;
        ListNode* back = NULL;
        ListNode* temp = NULL;
        while(curr != NULL){
            temp=curr->next;
            curr->next=back;
            back=curr;
            curr=temp;
        }
    return back;
};