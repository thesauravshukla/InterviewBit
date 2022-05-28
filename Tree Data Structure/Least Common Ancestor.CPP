void dfs(vector <int> path, int v, TreeNode* root, vector <int> &ans)
{
    if(ans.size() > 0)
        return;
    if(!root)
        return;
    if(root->val == v)
    {
        path.push_back(v);
        ans = path;
        return;
    }
    path.push_back(root->val);
    dfs(path,v,root->left,ans);
    dfs(path,v,root->right,ans);
    return;
}
int Solution::lca(TreeNode* A, int B, int C) 
{
    vector <int> path1;
    vector <int> path2;
    dfs(path1,B,A,path1);
    dfs(path2,C,A,path2);
    int i=0;
    for(i=0;i<min(path1.size(),path2.size());i++)
    {
        if(path1[i]!=path2[i])
            break;
    }
    return path1[i-1];
}
