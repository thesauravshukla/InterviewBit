void Solution::rotate(vector<vector<int> > &A)
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A[i].size();j++)
        {
            int temp=A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for(int i=0;i<A.size();i++)
    {
        reverse(A[i].begin(),A[i].end());
    }
}