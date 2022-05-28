bool isCyclic_util(vector <vector <int>> &adj, vector <bool> visited, int curr)
{
    if(visited[curr])
        return true;
    visited[curr] = true;
    bool flag = false;
    for(int i=0;i<adj[curr].size();i++)
    {
        flag = isCyclic_util(adj, visited, adj[curr][i]);
        if(flag)
            return true;
    }
    return false;
}
bool isCyclic(int V, vector <vector <int>> &adj)
{
    vector <bool> visited (V,false);
    bool flag=false;
    for(int i=0;i<V;i++)
    {
        visited[i] = true;
        for(int j=0;j<adj[i].size();j++)
        {
            flag = isCyclic_util(adj,visited,adj[i][j]);
            if(flag)
                return true;
        }
        visited[i] = false;
    }
    return false;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) 
{
    vector <vector <int>> adj(A);
    for(int i=0;i<B.size();i++)
    {
        B[i]--;
        C[i]--;
    }
    for(int i=0;i<B.size();i++)
    {
        adj[B[i]].push_back(C[i]);
    }
    return !isCyclic(A,adj);
}
