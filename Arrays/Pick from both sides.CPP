int Solution::solve(vector<int> &A, int B) 
{
    vector <int> lsum(A.size(),0);
    vector <int> rsum(A.size(),0);
    lsum[0] = A[0];
    for(int i=1;i<A.size();i++)
    {
        lsum[i] = A[i]+lsum[i-1];
    }
    rsum[rsum.size()-1] = A[A.size()-1];
    for(int i=rsum.size()-2;i>=0;i--)
    {
        rsum[i] = A[i]+rsum[i+1];
    }
    int maxi=max(lsum[B-1],rsum[rsum.size()-B]);
    if(A.size()<=B)
        return lsum[lsum.size()-1];
    for(int i=0;i<B;i++)
    {
        maxi = max(maxi,lsum[i]+rsum[rsum.size()-B+1+i]);
    }
    return maxi;
}