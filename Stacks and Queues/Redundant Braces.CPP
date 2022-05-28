int Solution::braces(string A) 
{
    stack <char> s;
    int flag=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=')')
            s.push(A[i]);
        else
        {
            if(s.top()=='(')
                return 1;
            else
            {
                while((!s.empty())&&(s.top()!='('))
                {
                    if((s.top()=='+')||(s.top()=='-')||(s.top()=='*')||(s.top()=='/'))
                        flag=1;
                    s.pop();
                }
                if(flag==0)
                    return 1;
                s.pop();
            }
        }
    }
    return 0;
    
}
