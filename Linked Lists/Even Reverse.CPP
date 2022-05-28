ListNode* reverselist(ListNode *head)
{
    if(!head)
        return head;
    if(!(head->next))
        return head;
    int count=0;
    ListNode *curr = head;
    ListNode*prev = NULL;
    ListNode *nextnd = head->next;
    while(curr)
    {
        curr->next=prev;
        if(!nextnd)
            break;
        prev=curr;
        curr=nextnd;
        nextnd=nextnd->next;
    }
    return curr;
}
ListNode* Solution::solve(ListNode* A) 
{
    ListNode *oddhead = NULL;
    ListNode *oddtail = NULL;
    ListNode *evenhead = NULL;
    ListNode *eventail = NULL;
    int count=1;
    while(A)
    {
        ListNode *temp = new ListNode(A->val);
        if(count%2)
        {
            if(!oddhead)
            {
                oddhead = temp;
                oddtail = temp;
            }
            else
            {
                oddtail->next = temp;
                oddtail = temp;
            }
        }
        else
        {
            if(!evenhead)
            {
                evenhead = temp;
                eventail = temp;
            }
            else
            {
                eventail->next = temp;
                eventail = temp;
            }
        }
        count++;
        A=A->next;
    }
    evenhead = reverselist(evenhead);
    ListNode *head = oddhead;
    while(evenhead&&oddhead)
    {
        ListNode* temp1 = evenhead->next;
        ListNode*temp2 = oddhead->next;
        oddhead->next = evenhead;
        evenhead->next = temp2;
        oddhead=temp2;
        evenhead=temp1;
    }
    return head;
}
