int Solution::trap(const vector<int> &A) 
{
    vector <int> lmax(A.size());
    vector <int> rmax(A.size());
    int ans = 0;
    lmax[0] = A[0];
    for(int i=1;i<A.size();i++)
    {
        lmax[i] = max(lmax[i-1],A[i]);
    }
    rmax[A.size()-1] = A[A.size()-1];
    for(int i=A.size()-2;i>=0;i--)
    {
        rmax[i] = max(rmax[i+1],A[i]);
    }
    for(int i=0;i<A.size();i++)
    {
        ans+= min(lmax[i],rmax[i])-A[i];
    }
    return ans;
}
