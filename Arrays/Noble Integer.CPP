int Solution::solve(vector<int> &A) 
{
    sort(A.begin(),A.end());
    unordered_map <int,int> freq;
    for(int i=0;i<A.size();i++)
    {
        freq[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    {
        if((A.size()-freq[A[i]]-i==A[i]))
        {
            return 1;
        }
        else
        {
            i+=freq[A[i]]-1;
        }
    }
    return -1;
    
}
