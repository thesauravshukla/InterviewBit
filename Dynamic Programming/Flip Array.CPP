int Solution::solve(const vector<int> &A) 
{
    int s=0;
    for(int i=0;i<A.size();i++)
    {
        s+=A[i];
    }
    s = s/2;
    vector<vector<pair <int,int>>> dp(A.size(), vector <pair <int,int>> (s+1));
    for(int i=0;i<A.size();i++)
    {
        dp[i][0] = make_pair(0,0);
    }
    for(int i=0;i<=s;i++)
    {
        if(i<A[0])
            dp[0][i] = make_pair(0,0);
        else
            dp[0][i] = make_pair(1,A[0]);
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(A[i]<=j)
            {
                dp[i][j].second = max(A[i]+dp[i-1][j-A[i]].second,dp[i][j-1].second);
                if(A[i]+dp[i-1][j-A[i]].second == dp[i][j-1].second)
                {
                    dp[i][j].first = min(1+dp[i-1][j-A[i]].first,dp[i][j-1].first);
                }
                else
                {
                    if(dp[i][j].second == A[i]+dp[i-1][j-A[i]].second)
                        dp[i][j].first = 1+dp[i-1][j-A[i]].first;
                    else
                        dp[i][j].first = dp[i][j-1].first;
                }
            }
            else
            {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    return dp[dp.size()-1][dp[0].size()-1].first; 
}
