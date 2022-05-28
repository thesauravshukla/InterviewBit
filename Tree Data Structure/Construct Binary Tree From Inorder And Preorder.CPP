unordered_map<int,int> m;
int idx = 0;
TreeNode* solve(vector<int> &preorder,vector<int>&inorder,int lb,int ub)
{
    if(lb > ub)
        return NULL;
    TreeNode* ans = new TreeNode(preorder[idx++]);
    if(lb == ub)
        return ans;
    int mid = m[ans->val];
    ans->left = solve(preorder,inorder,lb,mid-1);
    ans->right = solve(preorder,inorder,mid+1,ub);
    return ans;
}
TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) 
{
    idx = 0;
    int n = inorder.size();
    m.clear();
    for(int i=0;i<n;i++)
    {
        m[inorder[i]] = i;
    }
    TreeNode* root = solve(preorder,inorder,0,n-1);
    return root;
    
}
