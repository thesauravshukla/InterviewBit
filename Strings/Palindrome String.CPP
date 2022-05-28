int Solution::isPalindrome(string A) 
{
    string s1 = "";
    string s2 = "";
    for(int i=0;i<A.size();i++)
    {
        if((A[i]>=65)&&(A[i]<=90))
        {
            s1+=A[i]+32;
            s2+=A[i]+32;
        }
        
        else if((A[i]>=97)&&(A[i]<=122))
        {
            s1+=A[i];
            s2+=A[i];
        }
    }
    reverse(s1.begin(),s1.end());
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
            return false;
    }
    return true;
    
}
