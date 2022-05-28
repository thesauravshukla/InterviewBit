ListNode* Solution::swapPairs(ListNode* A) 
{
    if(!A || !(A->next))
        return A;
    ListNode *curr = A;
    ListNode *prev = NULL;
    ListNode *nextnd = A->next;
    ListNode *head = NULL;
    while(curr&&nextnd)
    {
        ListNode *t1 = nextnd->next;
        if(!prev)
        {
            nextnd->next = curr;
            curr->next = t1;
            head = nextnd;
        }
        else
        {
            prev->next = nextnd;
            nextnd->next = curr;
            curr->next = t1;
        }
        if((!t1)||(!t1->next))
            break;
        prev = curr;
        curr = t1;
        nextnd = t1->next;
    }
    return head;
}
