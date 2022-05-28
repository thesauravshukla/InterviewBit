/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) 
{
    vector <int> ans;
    while(A)
    {
        ans.push_back(A->val);
        A=A->next;
    }
    A=NULL;
    int l=0,r=ans.size()-1;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while(l<r)
    {
        ListNode *tem=new ListNode(ans[l]);
        if(!head && !tail)
        {
            head=tem;
            tail=tem;
        }
        else
        {
            tail->next=tem;
            tail=tem;
        }
        l++;
        ListNode *tem2=new ListNode(ans[r]);
        if(!head && !tail)
        {
            head=tem2;
            tail=tem2;
        }
        else
        {
            tail->next=tem2;
            tail=tem2;
        }
        r--;
    }
    if(l==r)
    {
        ListNode *tem2=new ListNode(ans[r]);
        if(!head && !tail)
        {
            head=tem2;
            tail=tem2;
        }
        else
        {
            tail->next=tem2;
            tail=tem2;
        }   
    }
    return head;
        
}
