int Solution::solve(int A, int B, vector<string> &C) 
{
    vector <vector<int>> minCost(A, vector <int>(B));
    for(int i=0;i<minCost.size();i++)
    {
        for(int j=0;j<minCost[i].size();j++)
        {
            minCost[i][j] = INT_MAX;
        }
    }
    queue <pair <int,int>> q;
    q.push(make_pair(0,0));
    minCost[0][0] = 0;
    while(q.size()>0)
    {
        if(q.front().first!=0)
        {
            pair <int,int> temp = make_pair(q.front().first-1,q.front().second);
            if(C[q.front().first][q.front().second] == 'U')
            {
                int val = minCost[temp.first + 1][temp.second];
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
            else
            {
                int val = minCost[q.front().first][q.front().second]+1;
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
        }
        if(q.front().first<A-1)
        {
            pair <int,int> temp = make_pair(q.front().first+1,q.front().second);
            if(C[q.front().first][q.front().second] == 'D')
            {
                int val = minCost[q.front().first][q.front().second];
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
            else
            {
                int val = minCost[q.front().first][q.front().second]+1;
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
        }
        if(q.front().second!=0)
        {
            pair <int,int> temp = make_pair(q.front().first,q.front().second-1);
            if(C[q.front().first][q.front().second] == 'L')
            {
                int val = minCost[q.front().first][q.front().second];
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
            else
            {
                int val = minCost[q.front().first][q.front().second]+1;
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
        }
        if(q.front().second<B-1)
        {
            pair <int,int> temp = make_pair(q.front().first,q.front().second+1);
            if(C[q.front().first][q.front().second] == 'R')
            {
                int val = minCost[q.front().first][q.front().second];
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
            else
            {
                int val = minCost[q.front().first][q.front().second]+1;
                if(val<minCost[temp.first][temp.second])
                {
                    q.push(temp);
                    minCost[temp.first][temp.second] = val;
                }
            }
        }
        q.pop();
    }
    return minCost[A-1][B-1];
}
