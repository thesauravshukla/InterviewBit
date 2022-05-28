int Solution::atoi(const string A) 
{
    long long int ans=0;
    int flag=1;
    for(int i=0;i<A.size();i++)
    {
        if((i==0)&&((A[i]=='+')||(A[i]=='-')))
            continue;
        if((A[0]=='-'))
                flag=-1;
        if(((A[i]-'0')>=0)&&((A[i]-'0')<=9))
        {
            ans=10*ans + (A[i]-'0')*(flag);
            if(ans>=INT_MAX)
                return INT_MAX;
            if(ans<=INT_MIN)
                return INT_MIN;
            // cout<<ans<<" ";
        }
        else 
            return ans;
    }
    return ans;
    
}
