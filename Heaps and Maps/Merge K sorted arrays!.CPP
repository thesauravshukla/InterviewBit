vector<int> Solution::solve(vector<vector<int> > &A) 
{
    priority_queue<int,vector <int>,greater<int>> maxh;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            maxh.push(A[i][j]);
        }
    }
    vector <int> ans;
    while(maxh.size()>0)
    {
        ans.push_back(maxh.top());
        maxh.pop();
    }
    return ans;
}

