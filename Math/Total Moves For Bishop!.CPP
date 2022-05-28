int Solution::solve(int A, int B) 
{
    int ans = 7-abs(A-B);
    if(A+B <= 9)
        ans += A+B-2;
    else
        ans+=7-(A+B)+9;
    return ans;  
}
