int Solution::nchoc(int A, vector<int> &B) 
{
    priority_queue <long long int> maxh;
    long long int ans=0;
    for(long long int i=0;i<B.size();i++)
    {
        maxh.push(B[i]);
    }
    while(A)
    {
        long long int temp = maxh.top();
        ans+=temp;
        maxh.pop();
        temp=temp/2;
        maxh.push(temp);
        A--;
    }
    return ans%1000000007;
}

