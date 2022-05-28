/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void dfs(vector <int> &ans, vector <int> temp, TreeNode* curr, int B)
 {
    if(!curr)
        return;
    temp.push_back(curr->val);
    if(curr->val == B)
    {
        ans = temp;
        return;
    }
    if(ans.size() > 0)
    {
        dfs(ans,temp,curr->left,B);
        dfs(ans,temp,curr->right,B);
    }
    return;
 }
 vector<int> Solution::solve(TreeNode* A, int B) 
{
    vector <int> ans;
    dfs(ans,ans,A,B);
    return ans;
}
