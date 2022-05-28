int retnum(char c)
{
    if(c=='I')
        return 1;
    if(c=='V')
        return 5;
    if(c=='X')
        return 10;
    if(c=='L')
        return 50;
    if(c=='C')
        return 100;
    if(c=='D')
        return 500;
    if(c=='M')
        return 1000;
    return -1;
}
int Solution::romanToInt(string A) 
{
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if((i<A.size()-1)&&(retnum(A[i])<retnum(A[i+1])))
        {
            ans+=retnum(A[i+1])-retnum(A[i]);
            i++;
        }
        else
        {
            ans+=retnum(A[i]);
        }
    }
    return ans;
    
}
