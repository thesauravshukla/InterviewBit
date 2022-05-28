int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size(),bulbs=0;
    for(int i=0;i<A.size();i++)
    {
        int flag=0;
        for(int j=min(i+B-1,n-1);j<=max(0,i-B+1);j--)
        {
            if(A[j])
            {
                bulbs++;
                flag=1;
                i = j+B;
                break;
            }
        }
        if(!flag)
            return -1;
    }
    return bulbs;
    
}
