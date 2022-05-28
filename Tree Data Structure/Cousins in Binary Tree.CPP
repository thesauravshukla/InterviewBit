/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) 
{
    vector <int> ans;
    queue <TreeNode*> q;
    q.push(A);
    if(B==A->val)
        return ans;
    while(q.size()>0)
    {
        int s=q.size();
        vector <int> temp;
        int flag=0;
        for(int i=0;i<s;i++)
        {
            if(q.front()->left)
            {
                if(q.front()->left->val == B)
                    flag=1;
                q.push(q.front()->left);
            }
            if(q.front()->right)
            {
                if(q.front()->right->val == B)
                    flag=1;
                q.push(q.front()->right);
            }
            if((q.front()->left)&&(q.front()->left->val != B)&&((!(q.front()->right))||(q.front()->right->val != B)))
                temp.push_back(q.front()->left->val);
            if((q.front()->right)&&(q.front()->right->val != B)&&((!(q.front()->left))||(q.front()->left->val != B)))
                temp.push_back(q.front()->right->val);
            q.pop();
        }
        if(flag)
            return temp;
    }
    return ans;
}
