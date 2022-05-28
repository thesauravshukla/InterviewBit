/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) 
{
    int zcount=0,ocount=0;
    while(A)
    {
        if(A->val == 0)
            zcount++;
        else
            ocount++;
        A=A->next;
    }
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while(zcount)
    {
        ListNode *temp = new ListNode(0);
        if(!head)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        zcount--;
    }
    while(ocount)
    {
        ListNode *temp = new ListNode(1);
        if(!head)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        ocount--;
    }
    return head;
    
}

