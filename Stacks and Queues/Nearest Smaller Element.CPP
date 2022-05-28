vector<int> Solution::prevSmaller(vector<int> &A) 
{
    vector <int> ans(A.size());
    stack <int> s;
    for(int i=0;i<A.size();i++)
    {
        while((s.size()>0)&&(A[i]<=s.top()))
            s.pop();
        if(s.size()>0)
            ans[i]=s.top();
        else
            ans[i]=-1;
        
        s.push(A[i]);
    }
    return ans;
    
}
