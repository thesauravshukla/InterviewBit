/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) 
{
    if(!A)
        return NULL;
    else if(!(A->next))
        return NULL;
    else if(!(A->next->next))
        return NULL;
    ListNode *slowptr = A;
    ListNode *fastptr = A;
    
    while(fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr)
        {
            while(A!=slowptr)
            {
                A=A->next;
                slowptr=slowptr->next;
            }
            return slowptr;
        }
        
    }
    return NULL;
}
