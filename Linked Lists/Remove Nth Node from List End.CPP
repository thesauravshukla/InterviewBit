/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) 
{
    int s=0;
    ListNode *thead=A;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    ListNode *prevtail = NULL;
    while(thead)
    {
        s++;
        if(!head)
        {
            head=thead;
            tail=thead;
        }
        else
        {
            tail->next=thead;
            prevtail=tail;
            tail=thead;
        }
        thead=thead->next;
    }int k=s;
    s = max(s-B,0);
    thead = A;
    int count=0;
    while(thead)
    {
        if(s == 0)
        {
            head=head->next;
            return head;
        }
        if(s==k-1)
        {
            prevtail->next=NULL;
            tail=prevtail;
            return head;
        }
        else
        {
            if(count == s+1)
            {
                thead->next = thead->next->next;
                return A;
            }
            else
            {
                count++;
                thead=thead->next;
            }
        }
    }
    return A;
    
}
