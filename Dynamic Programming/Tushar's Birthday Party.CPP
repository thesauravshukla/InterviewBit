int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) 
{
    vector <pair <int,int>> costdishpair;
    int maxcap=0;
    int ans=0;
    for(int i=0;i<B.size();i++)
    {
        costdishpair.push_back(make_pair(B[i],C[i]));
    }
    for(int i=0;i<A.size();i++)
    {
        maxcap = max(maxcap,A[i]);
    }
    sort(costdishpair.begin(),costdishpair.end());
    vector <vector <int>> dp(maxcap+1, vector <int> (costdishpair.size()));
    for(int i=0;i<costdishpair.size();i++)
    {
        dp[0][i] = 0;
    }
    for(int i=1;i<=maxcap;i++)
    {
        dp[i][0] = costdishpair[0].second*i;
    }
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {
            if(costdishpair[j].first <= i)
            {
                if(costdishpair[j].second + dp[i-costdishpair[j].first][j] < dp[i][j-1])
                    dp[i][j] = costdishpair[j].second + dp[i-costdishpair[j].first][j];
                else
                    dp[i][j] = dp[i][j-1];
            }
            else
                dp[i][j] = dp[i][j-1];
        }
    }
    for(int i=0;i<A.size();i++)
        ans+=dp[A[i]][dp[0].size()-1];
    return ans;
}
