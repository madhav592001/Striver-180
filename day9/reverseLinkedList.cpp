
//!  Iterative
// We will use three-pointers to traverse through the entire list and interchange links between nodes. One pointer to keep track of the current node in the list. The second one is to keep track of the previous node to the current node and change links. Lastly, a pointer to keep track of nodes in front of current nodes.

ListNode *reverseList(ListNode *head)
{
    if (!head)
        return head;
    if (!head->next)
        return head;

    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}