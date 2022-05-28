int Solution::solve(vector<int> &A) 
{
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if((A.size()-i)*(i+1) % 2 == 1)
            ans^=A[i];
    }
    return ans;
    
}
