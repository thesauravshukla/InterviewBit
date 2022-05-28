bool sortbysec(vector <int> A, vector <int> B)
{
    return A[1]<B[1];
}
int Solution::solve(vector<vector<int> > &A) 
{
    sort(A.begin(),A.end(),sortbysec);
    int count=1;
    int l=A[0][0], r=A[0][1],r2;
    for(int i=1;i<A.size();i++)
    {
        l=A[i][0];
        r2=A[i][1];
        if(l>r)
        {
            count++;
            r=r2;
        }
    }
    return count;
}

