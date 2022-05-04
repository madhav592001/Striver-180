//! Brute Force

Keep any one of the list to check its node present in the other list. Here, we are choosing the second list for this task.
Iterate through the other list. Here, it is the first one. 
Check if the both nodes are the same. If yes, we got our first intersection node.
If not, continue iteration.
If we did not find an intersection node and completed the entire iteration of the second list, then there is no intersection between the provided lists. Hence, return null.

Node* intersection(Node* head1, Node* head2){

    while(head2 != NULL){

        Node* temp = head1 ; 

        while(temp != nullptr){

            if(temp == head2) return temp ; 

            temp = temp->next ;
        }

        head2 = head2->next; 
    }

    return nullptr ; 

}