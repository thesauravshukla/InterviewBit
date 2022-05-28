int Solution::jump(vector<int> &A) 
{
    int currentrange=0,nextrange=0;
    int jumps=0;
    for(int i=0;i<=currentrange;i++)
    {
        if(i==A.size()-1)
            return jumps;
        nextrange = max(nextrange,A[i]+i);
        if(i==currentrange)
        {
            currentrange = nextrange;
            jumps++;
        }
    }
    return -1;
    
}
