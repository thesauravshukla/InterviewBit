void dfs(int s,TreeNode* root,vector<vector<int>> ans, vector<int> temp)
{
    temp.push_back(root->val);
    if(!(root->left) && !(root->right))
    {
        if(!s)
        {
            ans.push_back(temp);
        }
        return;
    }
    if(root->right)
    {
        dfs(s-root->right->val,root->right,ans,temp);
    }
    else
    {
        dfs(s-root->left->val,root->left,ans,temp);
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* root, int B) 
{
   vector <int> temp;
   vector<vector<int>> ans;
   temp.push_back(root->val);
   dfs(B-root->val,root,ans,temp);
   return ans;
}
