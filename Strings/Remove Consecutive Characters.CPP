string Solution::solve(string A, int B) 
{
    string ans="";
    int i=0;
    while(i<A.size())
    {
        string temp="";
        temp+=A[i];
        i++;
        while((i<A.size())&&(A[i]==A[i-1]))
        {
            temp+=A[i];
            i++;
        }
        // cout<<temp<<"\n";
        if(temp.size()!=B)
        ans+=temp;
    }
    return ans;
    
}
