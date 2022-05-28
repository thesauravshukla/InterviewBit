/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) 
{
    int maincount=0;
    int smallcount=0;
    int l=0;
    ListNode *curr = A;
    while(curr)
    {
        curr=curr->next;
        l++;
    }
    if(B>l)
    {
        B=B%l;
    }
    ListNode *head = NULL;
    ListNode *tail = NULL;
    stack <ListNode *> s;
    while(A)
    {
        ListNode *temp = new ListNode(A->val);
        if(maincount%2 == 0)
        {
            s.push(temp);
            if(s.size()==B)
            {
                while(s.size())
                {
                    ListNode *t = new ListNode(s.top()->val);
                    s.pop();
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
                }
                maincount++;
            }
        }
        else
        {
            if(!head)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next=temp;
                tail=temp;
            }
            smallcount++;
            if(smallcount==B)
            {
                smallcount=0;
                maincount++;
            }
        }
        A=A->next;
    }
    return head;
    
}
