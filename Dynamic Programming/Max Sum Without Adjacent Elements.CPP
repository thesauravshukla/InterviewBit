int Solution::adjacent(vector<vector<int> > &A) 
{
    vector <int> dp(A[0].size());
    dp[0] = max(A[0][0],A[1][0]);
    dp[1] = max(max(A[0][1],A[1][1]),max(A[0][0],A[1][0]));
    for(int i=2;i<A[0].size();i++)
    {
        dp[i] = max(max(A[0][i],A[1][i])+dp[i-2],dp[i-1]);
    }
    return dp[dp.size()-1];
}
