int Solution::maxSubArray(const vector<int> &A) 
{
    int maxi=INT_MIN,curr=0,min=INT_MAX;
    if(A.size()==0)
        return 0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<min)
            min=A[i];
        curr+=A[i];
        maxi = max(curr,maxi); 
        if(curr<0)
        {
            curr=0;
        }
    }
    if(maxi==0)
        return min;
    return maxi;
}
