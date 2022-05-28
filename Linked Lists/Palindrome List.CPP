/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    ListNode *t = A;
    while(t)    //storing a copy of the list
    {
        ListNode *temp1 = new ListNode(t->val);
        if(!head)
        {
            head = temp1;
            tail = temp1;
        }
        else
        {
            tail->next = temp1;
            tail = temp1;
        }
        t = t->next;
    }
    ListNode *currnode = A;
    ListNode *prevnode = NULL;
    ListNode *nextnode = NULL;
    while(currnode) //reversing the list
    {
        nextnode = currnode->next;
        currnode->next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    while(head)
    {
        if(prevnode->val != head->val)
            return 0;
        else
        {
            prevnode = prevnode->next;
            head=head->next;
        }
    }
    return 1;
    
}
