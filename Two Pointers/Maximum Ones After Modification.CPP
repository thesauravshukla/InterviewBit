int Solution::solve(vector<int> &A, int B) 
{
    int l=0,r=0,maxi=0,count=0,s=0;
    while(r<A.size())
    {
        
        if(A[r]==0)
        {
            count++;
        }
        r++;
        if(count>B)
        {
            if(A[l]==0)
            {
                count--;
            }
            l++;
        }
        else
        {
            s++;
        }
        maxi=max(maxi,s);
        
    }
    return maxi;
    
}
