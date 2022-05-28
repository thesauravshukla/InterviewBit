/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) 
{
    queue <TreeNode*> q1;
    if((!A)&&(!B))
        return true;
    if((A&&(!B))||(B&&(!A)))
        return false;
    if(A->val != B->val)
        return false;
    vector <int> temp1;
    vector <int> temp2;
    q1.push(A);
    temp1.push_back(A->val);
    while(q1.size())
    {
        if(q1.front()->left)
        {
            q1.push(q1.front()->left);
            temp1.push_back(q1.front()->left->val);
        }
        else
            temp1.push_back(-1);
        if(q1.front()->right)
        {
            q1.push(q1.front()->right);
            temp1.push_back(q1.front()->right->val);
        }
        else
            temp1.push_back(-1);
        q1.pop();
    }
    temp2.push_back(B->val);
    q1.push(B);
    while(q1.size())
    {
        if(q1.front()->left)
        {
            q1.push(q1.front()->left);
            temp2.push_back(q1.front()->left->val);
        }
        else
            temp2.push_back(-1);
        if(q1.front()->right)
        {
            q1.push(q1.front()->right);
            temp2.push_back(q1.front()->right->val);
        }
        else
            temp2.push_back(-1);
        q1.pop();
        if(temp2.size()>temp1.size())
            return false;
    }
    for(int i=0;i<temp1.size();i++)
    {
        if(temp1[i]!=temp2[i])
            return false;    
    }
    return true;
    
}
