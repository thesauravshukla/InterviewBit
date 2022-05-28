int Solution::maxProfit(const vector<int> &A) 
{
    if(!A.size())
        return 0;
    int mini=A[0],maxdiff=0;
    for(int i=0;i<A.size();i++)
    {
        maxdiff=max(A[i]-mini, maxdiff);
        mini=min(mini,A[i]);
    }
    return maxdiff;
}