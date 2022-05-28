int Solution::diffPossible(const vector<int> &A, int B) 
{
    unordered_map <int,int> isPresent;
    for(int i=0;i<A.size();i++)
    {
        isPresent[A[i]]++;
    }
    if(B==0)
    {
        for(int i=0;i<A.size();i++)
        {
            if(isPresent[A[i]]>1)
                return 1;
        }
    }
    else
    {
        for(int i=0;i<A.size();i++)
        {
            if(isPresent[B+A[i]]>0)
                return 1;
        }    
    }
    return 0;
    
}
