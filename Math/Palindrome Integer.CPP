int Solution::isPalindrome(int A) 
{
    long long int rev=0;
    long long int temp=A;
    long long int fact=1;
    while(temp)
    {
        int t=temp%10;
        temp = temp/10;
        rev = rev*10 + t;
    }
    
    if(A==rev)
        return 1;
    else
        return 0;
    
}
