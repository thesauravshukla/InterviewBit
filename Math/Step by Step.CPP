int Solution::solve(int A) 
{
    int currpos=0,steps=0,i=1;
    while((currpos < A)||((currpos-A)%2)!=0)
    {
        currpos+=i;
        i++;
        steps++;
        cout<<currpos<<" ";
    }
    return steps;
}
