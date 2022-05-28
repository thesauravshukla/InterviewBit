string Solution::longestPalindrome(string A) 
{
    vector <vector <bool>> dp(A.size(), vector <bool> (A.size()));
    int ans=1;
    pair <int,int> pos = make_pair(0,0);
    for(int i=0;i<A.size();i++)
    {
        dp[i][i] = true;
    }
    for(int i=0;i<A.size()-1;i++)
    {
        dp[i][i+1] = (A[i]==A[i+1]);
        if(dp[i][i+1])
        {
            ans=2;
            pos=make_pair(i,i+1);
        }
    }
    for(int offset=2;offset<dp.size();offset++)
    {
        for(int i=0;i+offset<dp.size();i++)
        {
            if((A[i]==A[i+offset])&&(dp[i+1][i+offset-1]))
            {
                dp[i][i+offset] = true;
                if(offset+1>ans)
                {
                    ans = offset+1;
                    pos.first = i;
                    pos.second = i+offset;
                }
            }
        }
    }
    string s;
    for(int i=pos.first;i<=pos.second;i++)
        s+=A[i];
    return s;
    
    
}
