/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A) 
{
    if(!A)
        return NULL;
    TreeNode *left = invertTree(A->left);
    TreeNode *right = invertTree(A->right);
    A->left = right;
    A->right = left;
    return A;
}
