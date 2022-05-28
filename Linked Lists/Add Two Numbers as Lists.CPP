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
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) 
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int carry = 0;
    while(A&&B)
    {
        ListNode *temp = new ListNode((A->val + B->val + carry)%10);
        carry = (A->val + B->val + carry)/10;
        if(!head)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        A = A->next;
        B = B->next;
    }
    while(A)
    {
        ListNode *temp = new ListNode((A->val + carry)%10);
        carry = (A->val + carry)/10;
        if(!head)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        A=A->next;
    }
    while(B)
    {
        ListNode *temp = new ListNode((B->val + carry)%10);
        carry = (B->val + carry)/10;
        if(!head)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        B=B->next;
    }
    if(carry>0)
    {
        ListNode *temp = new ListNode(carry);
        if(!head)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    head = reverselist(head);
    while(head&&(head->val == 0))
    {
        head=head->next;
    }
    head = reverselist(head);
    return head;
}
