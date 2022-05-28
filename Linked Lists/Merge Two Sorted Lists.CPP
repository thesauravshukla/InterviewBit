/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) 
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while(A&&B)
    {
        if(A->val < B->val)
        {
            ListNode *temp = new ListNode (A->val);
            A=A->next;
        }
        else
        {
            ListNode *temp = new ListNode (B->val);
            B=B->next;
        }
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
    if(A)
    {
        while(A)
        {
            ListNode *temp = new ListNode(A->val);
            tail->next=temp;
            tail=temp;
            A=A->next;
        }
    }
    if(B)
    {
        while(B)
        {
            ListNode *temp = new ListNode(B->val);
            tail->next=temp;
            tail=temp;
            B=B->next;
        }
    }
    return head;
    
}
