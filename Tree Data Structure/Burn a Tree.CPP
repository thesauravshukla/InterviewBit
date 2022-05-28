/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A, int B) 
{
    unordered_map <TreeNode*,TreeNode*> parent;
    unordered_map <TreeNode*,bool> visited;
    int l=0;
    queue <TreeNode*> q;
    q.push(A);
    parent[A] = NULL;
    queue <TreeNode*> q1;
    while(q.size()>0)
    {
        if(q.front()->val==B)
            q1.push(q.front());
        if(q.front()->left)
        {
            parent[q.front()->left] = q.front();
            q.push(q.front()->left);
        }
        if(q.front()->right)
        {
            parent[q.front()->right] = q.front();
            q.push(q.front()->right);
        }
        q.pop();
    }
    while(q1.size()>0)
    {
        int s=q1.size();
        for(int i=0;i<s;i++)
        {
            if((q1.front()->left)&&(!visited[q1.front()->left]))
            {
                q1.push(q1.front()->left);
                visited[q1.front()->left] = true;
            }
            if((q1.front()->right)&&(!visited[q1.front()->right]))
            {
                q1.push(q1.front()->right);
                visited[q1.front()->right] = true;
            }
            if((parent[q1.front()])&&(!visited[parent[q1.front()]]))
            {
                q1.push(parent[q1.front()]);
                visited[parent[q1.front()]] = true;
            }
            q1.pop();
        }
        l++;
    }
    l--;
    return l;    
}
