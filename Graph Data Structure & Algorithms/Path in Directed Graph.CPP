int Solution::solve(int A, vector<vector<int> > &B) 
{
    unordered_map<int, vector <int>> child;
    for(int i=0;i<B.size();i++)
    {
        child[B[i][0]].push_back(B[i][1]);
    }
    queue <int> q;
    map <int,int> seen;
    q.push(1);
    while(q.size()>0)
    {
        int s = q.size();
        for(int i=0;i<s;i++)
        {
            seen[q.front()]=true;
            for(int j=0;j<child[q.front()].size();j++)
            {
                if(!seen[child[q.front()][j]])
                {
                    q.push(child[q.front()][j]);
                    seen[child[q.front()][j]] = true;
                }
            }
            if(q.front()==A)
                return 1;
            q.pop();
        }
    }
    return 0;
    
}

