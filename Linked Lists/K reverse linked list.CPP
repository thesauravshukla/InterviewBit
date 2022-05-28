ListNode* Solution::reverseList(ListNode* A, int K) 
{
    int l=0;
    ListNode *curr = A;
    while(curr)
    {
        l++;
        curr = curr->next;
    }
    if(K>l)
    {
        K = K%l;
    }
    stack <ListNode*> s;
    curr=A;
    ListNode *newhead = NULL;
    ListNode *newtail = NULL;
    while(curr)
    {
        ListNode *temp = new ListNode(curr->val);
        s.push(temp);
        if(s.size()==K)
        {
            while(s.size())
            {
                if(!newhead)
                {
                    newhead = s.top();
                    newtail = s.top();
                }    
                else
                {
                    newtail->next = s.top();
                    newtail = s.top();
                }
                s.pop();
            }
        }
        curr=curr->next;
    }
    return newhead;
}
