int Solution::repeatedNumber(const vector<int> &A) 
{
    long long int n=A.size()-1;
    long long int sum = n*(n+1)*0.5;
    long long int tot=0;
    for(long long int i=0;i<A.size();i++)
    {
        tot += A[i];
    }
    tot -= sum;
    if(tot >= A.size())
        return -1;
    if(tot < 0)
        return -1;
    else
        return tot;
    
}


