/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSymmetric(TreeNode* A) 
{
    queue <TreeNode*> q;
    q.push(A);
    vector <int> temp;
    temp.push_back(A->val);
    while(q.size())
    {
        int s=q.size();
        int left=0,right=temp.size()-1;
        while(left<=right)
        {
            if(temp[left]!=temp[right])
                return false;
            left++;
            right--;
        }
        temp.clear();
        for(int i=0;i<s;i++)
        {
            if(q.front()->left)
            {
                q.push(q.front()->left);
                temp.push_back(q.front()->left->val);
            }
            else
                temp.push_back(-1);
            if(q.front()->right)
            {
                q.push(q.front()->right);
                temp.push_back(q.front()->right->val);
            }
            else 
                temp.push_back(-1);
            q.pop();
        }
        
    }
    return true;
}
