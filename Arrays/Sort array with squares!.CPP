vector<int> Solution::solve(vector<int> &A) 
{
    vector <int> ans(A.size());
    int curr=A.size()-1;
    int l=0,r=ans.size()-1;
    while(l<=r)
    {
        if(abs(A[l])>=A[r])
        {
            ans[curr]=(long long int)(A[l]*A[l]);
            l++;
        }
        else
        {
            ans[curr] = (long long int)(A[r]*A[r]);
            r--;
        }
        curr--;
    }
    return ans;
    
}
