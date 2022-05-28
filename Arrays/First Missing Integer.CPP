int Solution::firstMissingPositive(vector<int> &A) 
{
    
    int maxi=A[0];
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>maxi)
            maxi=A[i];
    }
    if(maxi<0)
        return 1;
    vector <int> freq(maxi,0);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0)
        {
            freq[A[i]-1]++;
        }
    }
    for(int i=0;i<A.size();i++)
    {
        if(freq[i] == 0)
            return (i+1);
    }
    
    return maxi+1;
    
    
}
