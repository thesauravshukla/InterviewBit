/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) 
{
    queue <TreeLinkNode*> q;
    q.push(A);
    while(q.size()>0)
    {
        vector <TreeLinkNode*> temp;
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            temp.push_back(q.front());
            q.pop();
        }
        for(int i=0;i<temp.size();i++)
        {
            if(i<temp.size()-1)
            {
                temp[i]->next = temp[i+1];
            }
            else
            {
                temp[i]->next = NULL;
            }
        }
    }
}
