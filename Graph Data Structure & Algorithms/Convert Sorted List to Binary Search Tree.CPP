TreeNode* buildtree(const vector <int> &arr, int left, int right)
{
    int mid = left + (right-left)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    if(left>right)
        return NULL;
    if(left==right)
        return root;
    root->left = buildtree(arr,left,mid-1);
    root->right = buildtree(arr,mid+1,right);
    return root;
}
TreeNode* Solution::sortedListToBST(ListNode* A) 
{
    if(!A)
        return NULL;
    vector <int> storage;
    while(A)
    {
        storage.push_back(A->val);
        A=A->next;
    }
    return buildtree(storage,0,storage.size()-1);
}
