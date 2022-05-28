int dijkstras(int src, int dest, int n, vector<vector<pair<int,int>>> &adj)
{
    vector<int> dist(n+1, INT_MAX);
    vector<bool> vis(n+1, false);
    dist[src]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minH;
    minH.push({0,src});
    while(!minH.empty())
    {
        pair<int,int> p=minH.top();
        int u=p.second;
        minH.pop();
        if(vis[u]) continue;
        vis[u]=true;
        for(auto child:adj[u])
        {
            int v=child.first;
            int w=child.second;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                minH.push({dist[v], v});
            }
        }
    }
    return dist[dest];
}
int Solution::solve(int A, vector<vector<int> > &B, int C, int D, vector<vector<int> > &E) 
{
    vector<vector<pair<int,int>>> adj(A+1);
    for(auto v:B){
        adj[v[0]].push_back({v[1], v[2]});
    }
    
    int ans=INT_MAX;
    for(auto v:E)
    {
        if(v[0]>A || v[1]>A) continue;
        adj[v[0]].push_back({v[1], v[2]});
        adj[v[1]].push_back({v[0], v[2]});
        int temp=dijkstras(C,D,A,adj);
        ans=min(ans, temp);
        adj[v[0]].pop_back();
        adj[v[1]].pop_back();
        
    }
    return (ans==INT_MAX) ? -1 : ans;
}
