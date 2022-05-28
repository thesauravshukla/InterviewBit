int Solution::solve(vector<int> &A) 
{
    map <int,int> temp;
    map <int,bool> seen;
    int sum=0,maxlen=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            sum+=-1;
        else
            sum+=1;
        if(sum==1)
            maxlen=i+1;
        else if(!seen[sum])
        {
            temp[sum]=i;
            seen[sum]=true;
        }
            
        if(seen[sum-1])
        {
            if(i-temp[sum-1]>maxlen)
                maxlen = i-temp[sum-1];
        }
    }
    return maxlen;
}
