int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) 
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            A[i][j] = (A[i][j]+1)%2;
        }
    }
    for(int i=1;i<A[0].size();i++)
    {
        if(A[0][i-1]==0)
            A[0][i]=0;
    }
    for(int i=1;i<A.size();i++)
    {
        if(A[i-1][0]==0)
            A[i][0]=0;
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<A[i].size();j++)
        {
            if(A[i][j]!=0)
            {
                A[i][j] = A[i-1][j]+A[i][j-1];
            }
        }
    }
    return A[A.size()-1][A[0].size()-1];    
}
