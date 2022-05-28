int Solution::solve(vector<int> &A, int B) 
{
    vector <int> prefix(A.size()+1,0);
    int odd=0;
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        prefix[odd]++;
        if(A[i]%2 == 1)
            odd++;
        if(odd>=B)
            count+=prefix[odd-B];
    }
    return count;
    
    
}
