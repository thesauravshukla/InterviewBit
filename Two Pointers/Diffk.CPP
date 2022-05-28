int Solution::diffPossible(vector<int> &A, int B) 
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if((A[j]-A[i])==B)
                return 1;
            else if(A[j] - A[i] < B)
                break;
        }
    }
    return 0;
    
}
