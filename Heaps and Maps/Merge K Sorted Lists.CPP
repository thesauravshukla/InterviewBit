/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) 
{
    priority_queue <int, vector <int>, greater <int>> minh;
    for(int i=0;i<A.size();i++)
    {
        ListNode *temp = A[i];
        while(temp)
        {
            minh.push(temp->val);
            temp=temp->next;
        }
    }
    vector <int> ans;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while(minh.size())
    {
        ListNode *t = new ListNode(minh.top());
        if(!head)
        {
            head = t;
            tail = t;
        }
        else
        {
            tail->next = t;
            tail = t;
        }
        minh.pop();
    }
    return head;
}