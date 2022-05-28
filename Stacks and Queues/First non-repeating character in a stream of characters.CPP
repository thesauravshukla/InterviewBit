string Solution::solve(string A) 
{
    queue <char> q;
    map <char,int> count;
    string b="";
    for(int i=0;i<A.size();i++)
    {
        count[A[i]]++;
        while((q.size()>0)&&(count[q.front()]>1))
            q.pop();
        if(count[A[i]]==1)
            q.push(A[i]);
        if(q.size()>0)
            b+=q.front();
        else
            b+='q';
    }
    return b;   
}
