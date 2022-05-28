 const bool comp(vector <int> a, vector <int> b)
{
    return((a[0]<b[0])||((a[0]==b[0])&&(a[1]<b[1]))||(((a[0]==b[0])&&(a[1]==b[1])&&(a[3]<b[3]))));
}
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) 
{
    vector <vector <int>> ans;
    if(!A)
        return ans;
    int l=0;
    queue <pair <int,TreeNode*>> q;
    q.push(make_pair(0,A));
    unordered_map<int,bool> seen;
    vector <vector <int>> toSort;
    while(q.size()>0)
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            if(q.front().second->left)
            {
                q.push(make_pair(q.front().first-1,q.front().second->left));
            }
            if(q.front().second->right)
            {
                q.push(make_pair(q.front().first+1,q.front().second->right));
            }
            vector <int> t;
            t.push_back(q.front().first);
            t.push_back(l);
            t.push_back(q.front().second->val);
            t.push_back(i);
            toSort.push_back(t);
            q.pop();    
        }
        l++;
    }
    sort(toSort.begin(),toSort.end(),comp);
    vector <int> temp;
    temp.push_back(toSort[0][2]);
    seen[toSort[0][0]] = true;
    for(int i=1;i<toSort.size();i++)
    {
        if(!seen[toSort[i][0]])
        {
            ans.push_back(temp);
            temp.clear();
        }
            temp.push_back(toSort[i][2]);
            seen[toSort[i][0]] = true;
    }
    if(temp.size()>0)
    {
        ans.push_back(temp);
    }
    return ans;
}
