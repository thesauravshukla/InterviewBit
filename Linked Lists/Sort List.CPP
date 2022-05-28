/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::sortList(ListNode* A) 
{
    vector <int> temp;
    while(A)
    {
        temp.push_back(A->val);
        A=A->next;
    }
    sort(temp.begin(),temp.end());
    ListNode *head = NULL;
    ListNode *tail = NULL;
    for(int i=0;i<temp.size();i++)
    {
        ListNode *t = new ListNode(temp[i]);
        if(!head)
        {
            head=t;
            tail=t;
        }
        else
        {
            tail->next=t;
            tail=t;
        }
    }
    return head;
    
}
