int Solution::solve(int A) 
{
    int count=0;
    A=A+1;
for(int i=0;i<=31;i++)
{
    count=(count%1000000007+(A/(int )pow(2,i+1))*(int )pow(2,i)%1000000007+
    max(A%(int)pow(2,i+1)-(int)pow(2,i),0)%1000000007)%1000000007;   
}
return count;
    
}