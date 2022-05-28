int Solution::solve(vector<int> &A) 
{
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>maxi)
        {
            maxi=A[i];
        }
        if(A[i]<mini)
        {
            mini = A[i];
        }
    }
    return maxi+mini;