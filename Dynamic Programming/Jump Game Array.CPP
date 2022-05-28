int Solution::canJump(vector<int> &A) 
{
    vector <int> dp(A.size());
    dp[0] = 1;
    for(int i=1;i<dp.size();i++)
        dp[i]=0;
    for(int i=1;i<A.size();i++)
    {
        for(int j=i-1;j>=max(i-30,0);j--)
        {
            if((A[j]+j >= i)&&(dp[j]))
            {
                dp[i] = 1;
                break;
                
            }
        }
    }
    return dp[dp.size()-1];
    
}
