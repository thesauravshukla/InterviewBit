bool isVowel(char c)
{
    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
        return true;
    return false;
}
int Solution::solve(string A) 
{
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if(isVowel(A[i]))
        {
            ans+=(A.size()-i)%10003;
        }
    }
    return (ans%10003);
}
