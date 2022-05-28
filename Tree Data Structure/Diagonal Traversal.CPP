void inord(map<int,vector <int>>&mp, TreeNode *root,int slope)
{
    if(!root)
        return;
    inord(mp,root->left,slope+1);
    mp[slope].push_back(root->val);
    inord(mp,root->right,slope);
    return;
}
vector<int> Solution::solve(TreeNode* A) 
{
    map <int,vector <int>> mp;
    vector <int> ans;
    inord(mp,A,0);
    for(auto i:mp)
    {
        for(int j=0;j<i.second.size();j++)
        {
            ans.push_back(i.second[j]);
        }
    }
    return ans;
}
