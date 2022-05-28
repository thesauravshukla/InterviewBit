int Solution::solve(vector<int> &A) 
{
    int evensum=0,oddsum=0,ans=0,evenpresum=0,oddpresum=0;
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
            evensum+=A[i];
        else
            oddsum+=A[i];
    }
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
        {
            if(oddpresum+evensum-evenpresum-A[i] == evenpresum+oddsum-oddpresum)
                ans++;
            evenpresum+=A[i];
        }
        else
        {
            if()
        }
    }
    
    
}
