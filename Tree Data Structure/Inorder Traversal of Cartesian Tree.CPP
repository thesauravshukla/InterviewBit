TreeNode* buildtree(const vector<int> &A, int left, int right)
{
    int maxind=0,maxi=INT_MIN;
    if(left>right)
        return NULL;
    for(int i=left;i<=right;i++)
    {
        if(A[i]>maxi)
        {
            maxi = A[i];
            maxind = i;
        }
    }
    TreeNode* root = new TreeNode(A[maxind]);
    if(left==right)
        return root;
    root->left = buildtree(A,left,maxind-1);
    root->right = buildtree(A,maxind+1,right);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) 
{
    return buildtree(A,0,A.size()-1);    
}
