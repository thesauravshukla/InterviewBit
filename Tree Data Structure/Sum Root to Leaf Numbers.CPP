 void dfs(TreeNode *root, long long int curr, long long int &ans)
 {
     curr = curr*10 + root->val;
     curr = curr%1003;
     if(!root->left && !root->right)
     {
         ans+=curr;
         ans = ans%1003;
         return;
     }
     if(root->left)
     {
         dfs(root->left,curr,ans);
     }
     if(root->right)
     {
         dfs(root->right,curr,ans);
     }
 }
int Solution::sumNumbers(TreeNode* A) 
{
    long long int ans = 0;
    dfs(A,0,ans);
    return ans%1003;
}
