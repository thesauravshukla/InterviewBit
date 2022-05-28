/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) 
{
    queue <TreeNode*> q;
    int l = 1;
    q.push(A);
    while(q.size() > 0)
    {
        int s = q.size();;
        for(int i=0;i<s;i++)
        {
            if(!q.front()->left && !q.front()->right)
                return l;
            if(q.front()->left)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
        l++;
    }
    return -1;
}
