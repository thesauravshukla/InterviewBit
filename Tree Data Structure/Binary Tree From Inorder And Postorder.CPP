 TreeNode * build(vector<int> &b, int &post,unordered_map<int,int> &m,int start,int end){
    if(start>end) return NULL;
    TreeNode *root = new TreeNode(b[post--]);
    if(start == end) return root;
    root->right = build(b,post,m,m[root->val]+1,end);
    root->left = build(b,post,m,start,m[root->val]-1);
    return root;
 }
TreeNode* Solution::buildTree(vector<int> &a, vector<int> &b) {
    unordered_map<int,int> m;
    for(int i=0; i<a.size(); i++) m[a[i]] = i;
    int x= b.size()-1;
    return build(b,x,m,0,a.size()-1);
}