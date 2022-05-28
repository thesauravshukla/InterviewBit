/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int calc(TreeNode * root)
 {
     if(!root)
        return 0;
    else
        return max(1+calc(root->left), 1+calc(root->right));
 }
int Solution::maxDepth(TreeNode* A) 
{
    return calc(A);    
}
