

//! two pointer approacth

// Take two dummy nodes, who’s next will be pointing to the head.
// Take another node to store the head, initially it,s a dummy node(start), and the next of the node will be pointing to the head.The reason why we are using this extra dummy node, is because there is an edge case. If the node is equal to the length of the linkedlist, then this slow’s will point to slow’s next→ next. And we can say our dummy start node will be broken, and will be connected to the slow’s next→ next.
// Start traversing until the fast pointer reaches the nth node.

// Now start traversing by one step both of the pointers until the fast pointers reach the end.

// When the traversal is done, just do the deleting part. Make  slow pointer’s next to the next of next of the slow pointer to ignore/disconnect the given node.

// Last, return the next of start.
ListNode *removeNthFromEnd(ListNode *head, int n)
{

    ListNode *start = new ListNode();
    start->next = head;
    ListNode *fast = start;
    ListNode *slow = start;
    for (int i = 1; i <= n; i++)
        fast = fast->next;

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return start->next;
}