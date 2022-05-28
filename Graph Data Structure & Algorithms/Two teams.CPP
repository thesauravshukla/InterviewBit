int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector <int> color(A,0);
    vector<vector<int>> adj(A);
    for(int i=0;i<B.size();i++)
    {
        adj[B[i][0]-1].push_back(B[i][1]-1);
        adj[B[i][1]-1].push_back(B[i][0]-1);
    }
    for(int i=0;i<A;i++)
    {
        if(color[i]==1 || color[i]==-1)
            continue;
        color[i] = 1;
        queue <int> q;
        q.push(i);
        while(!q.empty())
        {
            for(int j=0;j<adj[q.front()].size();j++)
            {
                if(color[q.front()] == color[adj[q.front()][j]])
                    return false;
                if(!color[adj[q.front()][j]])
                {
                    q.push(adj[q.front()][j]);
                    color[adj[q.front()][j]] = -color[q.front()];
                }
            }
            q.pop();
        }
    }
    return true;
    
}

