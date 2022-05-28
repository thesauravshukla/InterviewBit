string Solution::convert(string A, int B) 
{
    string ans="";
    int n=0,inc=1;
    vector <int> linenum(A.size());
    for(int i=0;i<A.size();i++)
    {
        linenum[i]=n;
        // cout<<n<<" ";
        if((n==0)&&(inc==0))
        {
            inc=1;
            n++;
        }
        else if((n==B-1)&&(inc==1))
        {
            inc=0;
            n--;
        }
        else if(inc==0)
        {
            
            n--;
        }
        else
        {
            n++;
        }
    }
    // for(int i=0;i<linenum.size();i++)
    // {
    //     cout<<linenum[i]<<" ";
    // }
    for(int i=0;i<B;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(linenum[j] == i)
                ans+=A[j];
        }
    }
    return ans;
    
}
