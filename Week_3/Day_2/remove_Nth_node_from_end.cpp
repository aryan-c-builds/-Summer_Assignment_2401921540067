class Solution {  
public:
    int countNodes(ListNode* head){
        int count=0;
        ListNode* temp = head;
        while(temp !=NULL){
            count++;
            temp = temp->next;
        }
    return count;    
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int pos = countNodes(head)-n;
        if(pos == 0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        while(pos > 1){
            temp = temp->next;
            pos--;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete(delNode);
    return head;    
    }
};