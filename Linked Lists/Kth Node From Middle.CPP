/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) 
{
    int s=0,k;
    ListNode *temp = A;
    while(temp)
    {
        s++;
        temp=temp->next;
    }
    k = (s/2 + 1 - B);
    if((k>s)||(k<0))
        return -1;
    else
    {
        temp = A;
        s=0;
        while(temp)
        {
            if(s == k)
                return temp->val;
            temp = temp->next;
             s++;
        }
    }
    return -1;
}
