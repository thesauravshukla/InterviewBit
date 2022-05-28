int Solution::maxcoin(vector<int> &A) 
{
    vector <vector <pair <int,int>>> dp(A.size(), vector <pair <int,int>> (A.size()));
    for(int i=0;i<A.size();i++)
    {
        dp[i][i].first = A[i];
        dp[i][i].second = 0;
    }
    for(int offset=1;offset<A.size();offset++)
    {
        for(int i=0;i+offset<A.size();i++)
        {
            dp[i][i+offset].first = max(A[i]+dp[i+1][i+offset].second, A[i+offset]+dp[i][i+offset-1].second);
            if(dp[i][i+offset].first == A[i]+dp[i+1][i+offset].second)
            {
                dp[i][i+offset].second = dp[i+1][i+offset].first;
            }
            else
            {
                dp[i][i+offset].second = dp[i][i+offset-1].first;
            }
        }
    }
    return dp[0][dp.size()-1].first ;
    
}
