vector<int> Solution::findPerm(const string A, int B) 
{
    int count=0;
    vector <int> ans;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='D')
            count++;
    }
    ans.push_back(count+1);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I')
            ans.push_back(ans[i]+1);
        else
            ans.push_back(ans[i]-1);
    }
    return ans;
    
}