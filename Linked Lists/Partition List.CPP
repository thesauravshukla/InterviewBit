/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
    ListNode* head = NULL;
    ListNode* tail = NULL;
    ListNode* temp = A;
    while(temp)
    {
        if(temp->val < B)
        {
            ListNode* temp2 = new ListNode(temp->val);
            if(!head)
            {
                head = temp2;
                tail = temp2;
            }
            else
            {
                tail->next = temp2;
                tail = temp2;
            }
        }
        temp = temp->next;
    }
    temp = A;
    while(temp)
    {
        if(temp->val >= B)
        {
            ListNode* temp2 = new ListNode(temp->val);
            if(!head)
            {
                head = temp2;
                tail = temp2;
            }
            else
            {
                tail->next = temp2;
                tail = temp2;
            }
        }
        temp = temp->next;
    }
    return head;
    
}
