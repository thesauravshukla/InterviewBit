/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void postord(TreeNode *root, vector <int> &ans)
 {
     if(!root)
        return;
    else
    {
        postord(root->left, ans);
        postord(root->right, ans);
        ans.push_back(root->val);
    }
 }
vector<int> Solution::postorderTraversal(TreeNode* A) 
{
    vector <int> ans;
    postord(A,ans);
    return ans;
    
    
}
