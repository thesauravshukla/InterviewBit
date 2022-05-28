/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) 
{
    unordered_map <int,bool> isPresent;
    isPresent[A->val]=true;
    ListNode *head=A;
    while((A)&&(A->next))
    {
        if(isPresent[A->next->val])
        {
            ListNode *temp = A->next->next;
            A->next=temp;
        }
            
        else
        {
            isPresent[A->next->val] = true;
            A=A->next;
        }
    }
    return head;
    
}
