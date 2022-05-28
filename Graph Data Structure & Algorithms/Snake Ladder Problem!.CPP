int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) 
{
    unordered_map <int,int> finalPos;
    unordered_map <int,bool> visited;
    unordered_map <int,bool> filled;
    for(int i=0;i<A.size();i++)
    {
        finalPos[A[i][0]] = A[i][1];
        filled[A[i][0]] = true;
    }
    for(int i=0;i<B.size();i++)
    {
        finalPos[B[i][0]] = B[i][1];
        filled[B[i][0]] = true;
    }
    for(int i=1;i<=100;i++)
    {
        if(!filled[i])
        {
            finalPos[i] = i;
            filled[i] = true;
        }
    }
    queue <int> q;
    q.push(1);
    int level=0;
    visited[1]=true;
    while(q.size()>0)
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            for(int j=1;j<=6;j++)
            {
                if(!visited[finalPos[q.front()+j]])
                {
                    visited[finalPos[q.front()+j]]=true;
                    q.push(finalPos[q.front()+j]);
                }
            }
            
            if(q.front() == 100)
                return level;
            q.pop();
        }
        level++;
    }
    return -1;
}
