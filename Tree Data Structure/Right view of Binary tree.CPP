/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) 
{
    queue <TreeNode*> q;
    q.push(A);
    vector <int> ans;
    while(q.size()>0)
    {
        int s=q.size();
        vector <int> temp;
        for(int i=0;i<s;i++)
        {
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            temp.push_back(q.front()->val);
            q.pop();
        }
        ans.push_back(temp[temp.size()-1]);
    }
    return ans;
    
}

