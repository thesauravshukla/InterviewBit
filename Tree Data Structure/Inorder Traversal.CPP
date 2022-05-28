/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
     void inord(TreeNode* root, vector <int> &temp)
 {
     if(!root)
        return;
    else
    {
        
        inord(root->left, temp);
        temp.push_back(root->val);
        inord(root->right, temp);
        
    }
 }
vector<int> Solution::inorderTraversal(TreeNode* A) 
{
    vector <int> temp;
    inord(A, temp);
    return temp;
}
