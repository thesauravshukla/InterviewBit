int Solution::solve(vector<int> &A, int B) 
{
    unordered_map <int,int> count;
    for(int i=0;i<A.size();i++)
    {
        count[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    {
        if(B==0)
        {
            if(count[A[i]]>1)
                return 1;
        }
        else
        {
            if((count[A[i]-B]>0)||(count[A[i]+B]>0))
            return 1;    
        }
        
    }
    return 0;
    
}
