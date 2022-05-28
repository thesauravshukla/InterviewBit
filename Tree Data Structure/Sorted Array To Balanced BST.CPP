/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* formBST(const vector <int> &arr, int start, int end)
 {
    if(start>end)
    {
        return NULL;
    }
    int mid = start + (end-start)/2;
    TreeNode *root = new TreeNode(arr[mid]);
    if(start==end)
        return root;
    else
    {
        root->left = formBST(arr,start,mid-1);
        root->right = formBST(arr,mid+1,end);    
    }
    return root;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) 
{
    return formBST(A,0,A.size()-1);
}
