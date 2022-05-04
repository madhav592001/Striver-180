
//! using map

bool detectCycle(Node *head)
{

    unordered_map<Node *> mp;

    Node *temp = head;

    while (temp)
    {
        if (mp.find(temp) != mp.end())
            return true;

        mp.insert(temp);

        temp = temp->next;
    }

    return false;
}

//!  Fast and Slow Pointers

We will use two pointers with different steps forward. The process is as follows:-

We will take two pointers, namely fast and slow. Fast pointer takes 2 steps ahead and slow pointer takes 2 points ahead.
Iterate through the list until the fast pointer is equal to NULL. This is because NULL indicates that there is no cycle present in the given list.
Cycle can be detected when fast and slow pointers collide.

    bool hasCycle(ListNode *head) {
        
        if(head  == NULL ) return false ;
        
        ListNode *fast = head ;
        ListNode *slow = head; 
        
        while(fast->next != nullptr && fast->next->next!=nullptr){
            slow = slow->next; 
            fast=fast->next->next;
            if(slow == fast )
                return true; 
        }
        
        return false ; 
    }