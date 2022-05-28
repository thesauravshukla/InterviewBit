int Solution::solve(vector<vector<int> > &A) 
{
    map <pair <int,int>, bool> seen;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if((A[i][j]==1)&&(!seen[make_pair(i,j)]))
            {
                int count=1;
                queue<pair<int,int>> q;
                q.push(make_pair(i,j));
                seen[make_pair(i,j)] = true;
                while(q.size()>0)
                {
                    if((q.front().first > 0)&&(q.front().second > 0))
                    {
                        pair <int,int> temp = make_pair(q.front().first-1, q.front().second-1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if((q.front().first > 0)&&(q.front().second < A[0].size()-1))
                    {
                        pair <int,int> temp = make_pair(q.front().first-1, q.front().second+1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if((q.front().first < A.size()-1)&&(q.front().second < A[0].size()-1))
                    {
                        pair <int,int> temp = make_pair(q.front().first+1, q.front().second+1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if((q.front().first < A.size()-1)&&(q.front().second > 0))
                    {
                        pair <int,int> temp = make_pair(q.front().first+1, q.front().second-1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if(q.front().first > 0)
                    {
                        pair <int,int> temp = make_pair(q.front().first-1, q.front().second);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if(q.front().first < A.size()-1)
                    {
                        pair <int,int> temp = make_pair(q.front().first+1, q.front().second);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if(q.front().second > 0)
                    {
                        pair <int,int> temp = make_pair(q.front().first, q.front().second-1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    if(q.front().second < A[0].size()-1)
                    {
                        pair <int,int> temp = make_pair(q.front().first, q.front().second+1);
                        if((A[temp.first][temp.second]==1)&&(!seen[make_pair(temp.first,temp.second)]))
                        {
                            seen[make_pair(temp.first,temp.second)] = true;
                            count++;
                            q.push(temp);
                        }
                    }
                    q.pop();
                }
                ans = max(count,ans);
            }
        }
    }
    return ans;
}
