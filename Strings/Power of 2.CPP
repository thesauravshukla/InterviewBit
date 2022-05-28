string longDivision(string number, int divisor)
{
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx) 
    {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
     if (ans.length() == 0)
        return "0";
    return ans;
}
int Solution::power(string A) 
{
    if((A.size()==1)&&((A[0]!='2')||(A[0]!='4')||(A[0]!='8')))
        return 0;
    while((A.size()!=1)&&(A[0]!=1))
    {
        A = longDivision(A,2);
        if((A[A.size()-1]=='1')||(A[A.size()-1]=='3')||(A[A.size()-1]=='5')||(A[A.size()-1]=='7')||(A[A.size()-1]=='9'))
            return 0;
    }
    return 1;
    
}
