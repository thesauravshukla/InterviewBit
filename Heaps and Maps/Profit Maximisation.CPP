int Solution::solve(vector<int> &A, int B) 
{
    int ans=0;
    priority_queue <int> maxh;
    for(int i=0;i<A.size();i++)
    {
        maxh.push(A[i]);
    }
    while(B)
    {
        ans+=maxh.top();
        int temp=maxh.top();
        maxh.pop();
        temp--;
        maxh.push(temp);
        B--;
    }
    return ans;
    
}

