int Solution::solve(vector<int> &A, int B) 
{
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==B)
            return i;
    }
    return -1;
}