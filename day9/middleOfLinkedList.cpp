
//! Naive Approach

ListNode *middleNode(ListNode *head)
{

    int count = 0;
    ListNode *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    int mid = (int)(count / 2);
    temp = head;

    for (int i = 0; i < mid; i++)
    {
        temp = temp->next;
    }

    return temp;
}

//! [Efficient] Tortoise-Hare-Approach

Create two pointers slow and fast and initialize them to a head pointer.
Move slow ptr by one step and simultaneously fast ptr by two steps until fast ptr is NULL or next of fast ptr is NULL.
When the above condition is met, we can see that the slow ptr is pointing towards the middle of Linked List and hence we can return the slow pointer.

    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
    }
