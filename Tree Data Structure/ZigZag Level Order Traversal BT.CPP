/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) 
{
    vector <vector <int>> ans;
    queue <TreeNode*> q;
    q.push(A);
    int l=0;
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
        if(l%2 == 1)
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
        l++;
    }
    return ans;
    
}
