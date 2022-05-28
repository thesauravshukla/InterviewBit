int Solution::solve(vector<int> &A, int B) 
{
    unordered_map <int,bool> present;
    unordered_map <int,bool> seen;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        present[A[i]] = true;
    }
    for(int i=0;i<A.size();i++)
    {
        if(!seen[A[i]])
        {
            seen[A[i]] = true;
            seen[A[i]^B] = true;
            if(present[A[i]^B])
                ans++;
        }
    }
    return ans;
    
}


