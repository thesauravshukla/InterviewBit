int Solution::minPathSum(vector<vector<int> > &A) 
{
    for(int i=1;i<A[0].size();i++)
    {
        A[0][i] = A[0][i] + A[0][i-1];
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(j==0)
                A[i][j] += A[i-1][j];
            else
                A[i][j]+=min(A[i-1][j],A[i][j-1]);
        }
    }
    return A[A.size()-1][A[0].size()-1];
    
}
