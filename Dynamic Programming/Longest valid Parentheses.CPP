int Solution::longestValidParentheses(string A) 
{
    stack <int> ind;
    stack <char> brac;
    int maxlen=0;
    ind.push(-1);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(')
        {
            ind.push(i);
            brac.push('(');
        }
        else
        {
            if((brac.size()>0)&&(brac.top()=='('))
            {
                maxlen = max(i-ind.top()+1, maxlen);
                  ind.pop();
                brac.pop(); 
            }
        }
    }
    return maxlen;
}
