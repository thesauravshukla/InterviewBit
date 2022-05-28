/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void preord(TreeNode* root, vector <int> &temp)
 {
     if(!root)
        return;
    else
    {
        temp.push_back(root->val);
        preord(root->left, temp);
        preord(root->right, temp);
        
    }
 }
vector<int> Solution::preorderTraversal(TreeNode* A) 
{
    vector <int> temp;
    preord(A, temp);
    return temp;
    
}
