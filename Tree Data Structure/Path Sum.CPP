/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum) 
{
    if(!root)
    {
        if(sum==0)
            return true;
        else
            return false;
    }
    return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);   
}
