int Solution::solve(vector<int> &A) 
{
    set <int> s;
    vector <int> postmax(A.size());
    postmax[A.size()-1] = 0;
    int ans=-1;
    s.insert(A[0]);
    for(int i=A.size()-2;i>=0;i--)
    {
        postmax[i] = max(A[i+1],postmax[i+1]);
    }
    for(int i=1;i<A.size()-1;i++)
    {
        
        if(A[i]<postmax[i])
        {
            s.insert(A[i]);
            auto itr = s.lower_bound(A[i]);
            if(itr!=s.begin());
            {
                itr--;
                ans = max(ans, *itr+A[i]+postmax[i]);
            }
        }
        
    }
    return ans;