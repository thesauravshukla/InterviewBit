int Solution::solve(int A, int B, int C) 
{
    A=A%B;
    C=C%B;
    if(A+C-1 < B)
        return A+C-1;
    else
    {
        A=A-(B-C+1);
        
    }  
}
