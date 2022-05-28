struct node 
{
    TreeNode* root;
    int lsum;
    int rsum;
    node (TreeNode* r)
    {
        root = r;
        lsum=0;
        rsum=0;
    }
};
int Solution::maxPathSum(TreeNode* A) 
{
    stack <node*> s;
    queue <TreeNode*> q;
    q.push(A);
    map <TreeNode*,node*> mp;
    while(q.size()>0)
    {
        node *temp = new node(q.front());
        mp[q.front()] = temp;
        s.push(temp);
        if(q.front()->left)
        {   
            q.push(q.front()->left);
        }
        if(q.front()->right)
        {
            q.push(q.front()->right);
        }
        q.pop();
    }
    int ans = INT_MIN;
    while(s.size()>0)
    {
        if(s.top()->root->left)
        {
            int v1 = s.top()->root->left->val;
            int v2 = max(mp[s.top()->root->left]->lsum,0);
            int v3 = max(mp[s.top()->root->left]->rsum,0);
            s.top()->lsum = max(v1+max(v2,v3),0);
        }
        if(s.top()->root->right)
        {
            int v1 = s.top()->root->right->val;
            int v2 = max(mp[s.top()->root->right]->lsum,0);
            int v3 = max(mp[s.top()->root->right]->rsum,0);
            s.top()->rsum = max(v1+max(v2,v3),0);
        }
        ans = max(ans, s.top()->root->val+s.top()->lsum+s.top()->rsum);
        s.pop();
    }
    return ans;  
}
