int Solution::largestRectangleArea(vector<int> &A) 
{
    vector <int> lsmall(A.size());
    vector <int> rsmall(A.size());
    stack <int> s;
    for(int i=A.size()-1;i>=0;i--)
        {
        while((s.size()>0)&&(A[s.top()]>=A[i]))
        {
            s.pop();
        }
        if(s.size()==0)
        rsmall[i] = A.size();
        else
            rsmall[i] = s.top();
        s.push(i);
    }
    while(!s.empty())
        s.pop();
    for(int i=0;i<A.size();i++)
    {
        while(s.size()>0 && A[s.top()]>=A[i])
        {
            s.pop();
        }
        if(s.size()==0)
            lsmall[i] = -1;
        else
        lsmall[i] = s.top();
        s.push(i);
    }
    int ans=0;
    for(int i=0;i<A.size();i++)
        {
        int l = lsmall[i];
        int r = rsmall[i];
        ans = max((r-l-1)*A[i],ans);
    }
    return ans;    
}
