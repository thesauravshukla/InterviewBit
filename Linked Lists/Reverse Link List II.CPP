ListNode* Solution::reverseBetween(ListNode* A, int B, int C) 
{
    if(!A||!(A->next))
        return A;
    vector <int> toReverse;
    vector <int> temp;
    while(A)
    {
        toReverse.push_back(A->val);
        
        A=A->next;
    }
    reverse(toReverse.begin() + B-1, toReverse.begin() + C);
    ListNode *head = NULL;
    ListNode *tail = NULL;
    for(int i=0;i<toReverse.size();i++)
    {
        ListNode *temp = new ListNode(toReverse[i]);
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
    return head;
}