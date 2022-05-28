TreeNode* buildTree(TreeNode* curr,TreeNode* newroot,vector <int> &preorder)
{
    if(!curr)
        return NULL;
    preorder.push_back(curr->val);
    buildTree(curr->left,preorder);
    buildTree(curr->right,preorder);
}
TreeNode* Solution::flatten(TreeNode* A) 
{
    if(!A)
        return NULL;
    vector <int> preorder;
    buildTree(A,preorder);
    TreeNode* newroot = new TreeNode(preorder[0]);
    TreeNode *ans = newroot;
    for(int i=1;i<preorder.size();i++)
    {
        newroot->left = NULL;
        newroot->right = new TreeNode(preorder[i]);
        newroot = newroot->right;
    }
    return ans;
}