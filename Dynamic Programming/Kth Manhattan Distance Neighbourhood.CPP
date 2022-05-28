vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) 
{
    if(B.size()==0 || B[0].size()==0)
        return {};
    if(A==0)
        return B;
    int dp[B.size()][B[0].size()][A+1];
    vector <vector <int>> ans;
    for(int i=0;i<B.size();i++)
    {
        for(int j=0;j<B[0].size();j++)
        {
            dp[i][j][0] = B[i][j];
        }
    }
    for(int k=1;k<=A;k++)
    {
        for(int i=0;i<B.size();i++)
        {
            for(int j=0;j<B[0].size();j++)
            {
                dp[i][j][k] = dp[i][j][k-1];
                if((i-1)>=0)
                    dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k-1]);
                if((i+1)<B.size())
                    dp[i][j][k] = max(dp[i][j][k], dp[i+1][j][k-1]);
                if((j-1)>=0)
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k-1]);
                if((j+1)<B[0].size())
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j+1][k-1]);
            }
        }
    }
    for(int i=0;i<B.size();i++)
    {
        vector <int> temp;
        for(int j=0;j<B[i].size();j++)
        {
            temp.push_back(dp[i][j][A]);
        }
        ans.push_back(temp);
    }
    return ans;
    
}
