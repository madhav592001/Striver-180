
//! Brute Force -> Usint map

Node* detectCycle(Node* head){
    unordered_map<Node*> mp ; 
    Node* temp = head; 

    while(temp){
        if(mp.find(temp) != mp.end()) return temp ; 
        else{
            mp.insert(temp) ; 
        }
    }

    return NULL ; 
}

//! Optimized -> Using Slow and Fast Pointer

Node* detectCycle(Node* head){
    Node* slow = head; 
    Node* fast = head; 
    Node* entry = head; 

    while(fast->next != NULL && fast->next->next!=NULL){
        slow = slow->next ; 
        fast = fast->next->next ; 

        if(slow == fast){
            while(slow != entry){
                slow = slow->next; 
                entry = entry->next ; 
            }
            return slow ; 
        }
    }

    return NULL ; 
}