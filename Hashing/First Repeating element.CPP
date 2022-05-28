int Solution::solve(vector<int> &A) 
{
    unordered_map <int,int> freq;
    
    for(int i=0;i<A.size();i++)
    {
        freq[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    {
        if(freq[A[i]] > 1)
            return i;
    }
    return -1;
    
}
