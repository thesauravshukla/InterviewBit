int Solution::chordCnt(int A) 
{
    if(A==1)
        return 1;
    if(A==2)
        return 2;
    vector <long long int> dp(A+1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<dp.size();i++)
    {
        int l=0,r=i-1;
        long long int ans=0;
        while(r>=0)
        {
            ans+=dp[l]*dp[r];
            ans=ans%1000000007;
            l++;
            r--;
        }
        dp[i] = ans;
    }
    return dp[dp.size()-1];
    
}
