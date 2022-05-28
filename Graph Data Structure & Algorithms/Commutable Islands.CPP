int Solution::solve(int A, vector<vector<int> > &B) 
{
    for(int i=0;i<B.size();i++)
    {
        B[i][0]--;
        B[i][1]--;
    }
    vector <int> parent(A,-1);
    vector <bool> inMST(A,false);
    vector <int> key(A,INT_MAX);
    vector <vector <pair <int,int>>> adj(A);
    priority_queue <pair <int,int>, vector<pair <int,int>>, greater <pair <int,int>>> minh;
    for(int i=0;i<B.size();i++)
    {
        adj[B[i][0]].push_back(make_pair((B[i][1]),B[i][2]));
        adj[B[i][1]].push_back(make_pair((B[i][0]),B[i][2]));
    }
    minh.push(make_pair(0,0));
    key[0] = 0;
    while(!minh.empty())
    {
        int u = minh.top().second;
        minh.pop();
        if(inMST[u])
            continue;
        inMST[u] = true;
        for (int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i].first;
            int weight = adj[u][i].second;
            if((!inMST[v])&&(key[v]>weight))
            {
                key[v] = weight;
                minh.push(make_pair(key[v],v));
                parent[v] = u;
            }
        }
    }
    int ans=0;
    for(int i=1;i<A;i++)
    {
        for(int j=0;j<adj[parent[i]].size();j++)
        {
            if(adj[parent[i]][j].first==i)
            {
                ans+=adj[parent[i]][j].second;
                break;
            }
        }
    }
    return ans;
}

