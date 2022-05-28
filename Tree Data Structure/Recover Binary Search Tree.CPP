void inorder(vector <int> &arr, TreeNode* root)
{
    if(!root)
        return;
    inorder(arr,root->left);
    arr.push_back(root->val);
    inorder(arr,root->right);
}
vector<int> Solution::recoverTree(TreeNode* A) 
{
    vector <int> incorrect;
    inorder(incorrect,A);
    vector <int> correct;
    vector <int> ans;
    for(int i=0;i<incorrect.size();i++)
    {
        correct.push_back(incorrect[i]);
    }
    sort(correct.begin(),correct.end());
    for(int i=0;i<correct.size();i++)
    {
        if(incorrect[i]!=correct[i])
            ans.push_back(incorrect[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
