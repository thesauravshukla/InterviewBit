int Solution::solve(string A) 
{
    stack <char> s;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==')')
        {
            if(s.size()==0)
                ans++;
            else if(s.top()=='(')
                s.pop();
        }
        if(A[i]=='(')
            s.push('(');
    }
    return ans+s.size();
    
}
