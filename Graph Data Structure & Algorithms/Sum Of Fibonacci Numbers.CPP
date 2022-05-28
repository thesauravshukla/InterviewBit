void genfib(int &N, vector <int> &ans)
{
    ans.push_back(1);
    int prev=1;
    int curr=1;
    while(curr<=N)
    {
        ans.push_back(prev+curr);
        prev=curr;
        curr=ans[ans.size()-1];
    }
    return;
}
int Solution::fibsum(int A) 
{
    vector <int> ans;
    reverse(ans.begin(),ans.end());
    genfib(A,ans);
    int c = 0;
    while(A>0)
    {
        int index = (lower_bound(ans.begin(),ans.end(),A)-ans.begin());
        c++;
        if(ans[index]==A) 
            A=0;
        else 
            A-=ans[index-1];
    }
    return c;
}
