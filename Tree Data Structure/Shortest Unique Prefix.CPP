struct node
{
    char c;
    bool isWord;
    int wc;
    vector <node*> children;
    node(char x)
    {
        c = x;
        isWord = false;
        wc = 1;
        vector <node*> temp(26,NULL);
        children = temp;
    }
};
node* createtrie(vector <string> A)
{
    node *root = new node('0');
    node *curr = root;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(!(curr->children[A[i][j]-'a']))
            {
                node *temp = new node(A[i][j]);
                curr->children[A[i][j]-'a'] = (temp);
                curr=temp;
            }
            else
            {
                curr->children[A[i][j]-'a']->wc++;
                curr = curr->children[A[i][j]-'a'];
            }
        }
        curr->isWord = true;
        curr=root;
    }
    return root;
}
void dfs(node* root, string str, vector <string> &ans)
{
    str+=root->c;
    if((root->isWord)||(root->wc == 1))
    {
        ans.push_back(str);
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        if(root->children[i])
        {
            dfs(root->children[i],str,ans);
        }
    }
}
vector<string> Solution::prefix(vector<string> &A) 
{
    node *root = createtrie(A);
    string emp = "";
    vector <string> ans;
    for(int i=0;i<root->children.size();i++)
    {
        if(root->children[i])
        {
            dfs(root->children[i],emp,ans);
        }
    }
    vector <pair <string,int>> toSort;
    for(int i=0;i<A.size();i++)
    {
        toSort.push_back(make_pair(A[i],i));
    }
    sort(toSort.begin(),toSort.end());
    sort(ans.begin(),ans.end());
    vector <string> tempans(ans.size());
    for(int i=0;i<ans.size();i++)
    {
        tempans[toSort[i].second] = ans[i];
    }
    return tempans;
}
