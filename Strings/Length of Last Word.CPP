int Solution::lengthOfLastWord(const string A) 
{
    int ans=0;
    int i=A.size()-1;
    while((i>=0)&&(A[i]==' '))
        i--;
    while(i>=0)
    {
        if(A[i]==' ')
            break;
        else
            ans++;
        i--;
    }
    return ans;
    
}
