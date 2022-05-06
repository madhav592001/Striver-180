
//!  Brute Force

bool isPalindrome(ListNode *head)
{

    vector<int> arr;

    while (!head)
        false;

    ListNode *temp = head;

    while (temp)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi)
    {
        if (arr[lo] != arr[hi])
            return false;
        lo++;
        hi--;
    }

    return true;
}

//!  Optimized

bool isPalindrome(ListNode *head)
{

    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *dummy = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = slow;
    ListNode *curr = slow->next;
    ListNode *next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    slow = slow->next;

    while (slow)
    {
        if (dummy->val != slow->val)
            return false;
        dummy = dummy->next;
        slow = slow->next;
    }

    return true;
}