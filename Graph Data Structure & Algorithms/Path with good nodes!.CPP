void dfs(int &ans,vector<int>&A,vector<vector<int>>&graph,int &C, int curr,int prev,int count)
{
    if(A[curr]==1)
    {
        count++;
    }
    if(graph[curr].size()==1 && graph[curr][0] == prev && count<=C)
    {
        ans++;
        return;
    }
    for(int i=0;i<graph[curr].size();i++)
    {
        if(graph[curr][i] != prev)
        {
            dfs(ans,A,graph,C,graph[curr][i],curr,count);
        }
    }
    return;
}
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) 
{
    vector<vector<int>> graph(A.size());
    for(int i=0;i<B.size();i++)
    {
        B[i][0]--;
        B[i][1]--;
    }
    for(int i=0;i<B.size();i++)
    {
        graph[B[i][0]].push_back(B[i][1]);
        graph[B[i][1]].push_back(B[i][0]);
    }
    int ans=0;
    dfs(ans,A,graph,C,0,0,0);
    return ans;
}
