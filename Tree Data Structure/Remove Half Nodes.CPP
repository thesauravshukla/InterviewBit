TreeNode* Solution::solve(TreeNode* A) 
{
    if(!A)
        return NULL;
    if(A->left && A->right)
    {
        A->left = solve(A->left);
        A->right = solve(A->right);
    }
    if(A->left && !A->right)
    {
        A->left = solve(A->left->left);
    }
    if(!A->left && A->right)
    {
        A->right = solve(A->right->right);
    }
    return A;
    
}
