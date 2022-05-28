/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::kthsmallest(TreeNode* A, int B) 
{
    priority_queue <int> maxh;
    queue <TreeNode*> q;
    q.push(A);
    while(q.size()>0)
    {
        if(q.front()->left)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right)
        {
            q.push(q.front()->right);
        }
        maxh.push(q.front()->val);
        if(maxh.size()>B)
            maxh.pop();
        q.pop();
    }
    return maxh.top();
    
}
