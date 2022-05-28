int Solution::black(vector<string> &A) 
{
    map <pair <int,int>, bool> seen;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((A[i][j] == 'X')&&(!seen[make_pair(i,j)]))
            {
                ans++;
                queue <pair <int,int>> q;
                q.push(make_pair(i,j));
                seen[make_pair(i,j)] = true;
                while(q.size()>0)
                {
                    if(q.front().first < A.size()-1)
                    {
                        pair <int,int> temp = make_pair(q.front().first+1,q.front().second);
                        if((A[q.front().first+1][q.front().second] == 'X')&&(!seen[temp]))
                        {
                            q.push(temp);
                            seen[temp] = true;
                        }
                    }
                    if(q.front().second < A[0].size()-1)
                    {
                        pair <int,int> temp = make_pair(q.front().first,q.front().second+1);
                        if((A[q.front().first][q.front().second + 1] == 'X')&&(!seen[temp]))
                        {
                            q.push(temp);
                            seen[temp] = true;
                        }
                    }
                    if(q.front().first > 0)
                    {
                        pair <int,int> temp = make_pair(q.front().first-1,q.front().second);
                        if((A[q.front().first-1][q.front().second] == 'X')&&(!seen[temp]))
                        {
                            q.push(temp);
                            seen[temp] = true;
                        }
                    }
                    if(q.front().second > 0)
                    {
                        pair <int,int> temp = make_pair(q.front().first,q.front().second-1);
                        if((A[q.front().first][q.front().second - 1] == 'X')&&(!seen[temp]))
                        {
                            q.push(temp);
                            seen[temp] = true;
                        }
                    }
                    q.pop();
                }
            }
        }
    }
    return ans;
    
}
