vector<vector<int> > Solution::queenAttack(vector<string> &A) 
{
    vector <vector <bool>> dp(A.size(), vector <bool> (A[0].size()));
    vector <vector <int>> ans(A.size(), vector <int> (A[0].size()));
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(i==0)
            {
                dp[i][j] = false;
                ans[i][j] = 0;
            }
            else
            {
                dp[i][j] = (A[i-1][j]-'0')||dp[i-1][j];
                ans[i][j] = dp[i][j];
            }
        }
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((i==0)||(j==A[0].size()-1))
            {
                dp[i][j] = false;
            }
            else
            {
                dp[i][j] = A[i-1][j+1]-'0'||dp[i-1][j+1];
                ans[i][j]+=dp[i][j];
            }
        }
    }
    for(int j=A[0].size()-1;j>=0;j--)
    {
        for(int i=0;i<A.size();i++)
        {
            if(j==A[0].size()-1)
            {
                dp[i][j] = false;
            }
            else
            {
                dp[i][j] = dp[i][j+1]||(A[i][j+1]-'0');
            }
            ans[i][j]+=dp[i][j];
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        for(int j=A[0].size()-1;j>=0;j--)
        {
            if((j==A[0].size()-1)||(i==A.size()-1))
                dp[i][j] = false;
            else
                dp[i][j] = dp[i+1][j+1]||(A[i+1][j+1]-'0');
            ans[i][j]+=dp[i][j];
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(i==A.size()-1)
                dp[i][j] = false;
            else
                dp[i][j] = dp[i+1][j]||(A[i+1][j]-'0');
            ans[i][j]+=dp[i][j];
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((i==A.size()-1)||(j==0))
                dp[i][j] = false;
            else
                dp[i][j] = dp[i+1][j-1]||(A[i+1][j-1]-'0');
            ans[i][j]+=dp[i][j];
        }
    }
    for(int j=0;j<A[0].size();j++)
    {
        for(int i=0;i<A.size();i++)
        {
            if(j==0)
                dp[i][j] = false;
            else
                dp[i][j] = dp[i][j-1]||(A[i][j-1]-'0');
            ans[i][j]+=dp[i][j];
        }
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if((i==0)||(j==0))
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i-1][j-1]||(A[i-1][j-1]-'0');
            ans[i][j]+=dp[i][j];
        }
    }
    return ans;
}
