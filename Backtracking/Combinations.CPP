void gencomb(vector <vector <int>> &ans, vector <int> here, int k, int n)
{
    if((here.size()==k))
    {
        ans.push_back(here);
        return;
        }
    else
    {
        for(int i=here[here.size()-1]+1;i<=n;i++)
        {
            here.push_back(i);
            gencomb(ans,here,k,n);
            here.pop_back();
        }
    }
}
vector<vector<int> > Solution::combine(int n, int k) 
{
    vector <vector <int>> ans;
    vector <int> here;
    for(int i=1;i<=n;i++)
    {
        vector <int> temp;
        temp.push_back(i);
        gencomb(ans,temp,k,n);
    }
    for(int i=0;i<ans.size();i++)
    {
        sort(ans[i].begin(),ans[i].end());
    }
    sort(ans.begin(),ans.end());
    return ans; 
    
}
