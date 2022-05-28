string Solution::simplifyPath(string A) 
{
    stack <string> s;
    string temp="";
    string a1="/";
    for(int i=0;i<A.size();i++)
    {
        if((A[i]!='.')||(A[i]!='/'))
        {
            temp+=A[i];
        }
        else if((A[i]=='.')&&(i<A.size()-1)&&(A[i+1]=='.'))
        {
            if(temp.size()>0)
            {
                s.push(temp);
                temp = "";
            }
            if(!s.empty())
                s.pop();
        }
        else if((A[i]=='/')&&(!s.empty())&&(s.top()!=a1))
        {
            if(temp.size()>0)
            {
                s.push(temp);
                temp = "";
            }
            temp+='/';
            s.push(temp);
            temp.clear();
        }
    }
    stack <string> t;
    while(!s.empty())
    {
        t.push(s.top());
        s.pop();
    }
    string ans;
    while(t.size()>0)
    {
        ans+=t.top();
        t.pop();
    }
    return ans;
}
