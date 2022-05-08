
//! Brute Force

node* rotateRight(node* head,int k) {
    if(head == NULL||head->next == NULL) return head;
    for(int i=0;i<k;i++) {
        node* temp = head;
        while(temp->next->next != NULL) temp = temp->next;
        node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
    return head;
}

//! Optimal ->
1. Calculate the length of the llist . 
2. Connect its last element to its first element . 
3. Iterate to cut the last link of the length k%length 

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL) return head; 
        
        ListNode* temp = head ; 
        int count = 1 ; 
        
        while(temp->next) { ++count; temp = temp->next; } 
        
        temp->next = head ; 
        k = k%count ; 
        
        for(int i = 0 ; i < count-k ; i++){
            temp = temp->next; 
        }
        
        head = temp->next; 
        temp->next = NULL ; 
        
        return head; 
        
    }