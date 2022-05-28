int Solution::climbStairs(int A) 
{
    if(!A)
        return 0;
    if(A==1)
        return 1;
    if(A==2)
        return 2;
    vector <int> dp(A+1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=A;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[A];   
}
