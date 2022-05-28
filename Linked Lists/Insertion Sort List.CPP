/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  void insertInList(ListNode** head_ref, ListNode** tail_ref, int v)
    {
        ListNode* temp = new ListNode(v);
        ListNode* curr = (*head_ref);
        if(!(*head_ref))
        {
            (*head_ref) = temp;
            (*tail_ref) = temp;
            return;
        }
        if((*head_ref)->val > v)
        {
            temp->next = (*head_ref);
            (*head_ref) = temp;
            return;
        }
        while(curr && curr->next)
        {
            if(curr->next->val > v)
            {
                ListNode* temp2 = curr->next;
                curr->next = temp;
                temp->next = temp2;
                return;
            }
            curr = curr->next;
        }
        curr->next = temp;
        (*tail_ref) = curr;
        return;
    }
ListNode* Solution::insertionSortList(ListNode* A) 
{
    ListNode* head = NULL;
    ListNode* tail = NULL;
    while(A)
    {
        insertInList(&head,&tail,A->val);
        A = A->next;
    }
    return head;
}
