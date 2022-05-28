vector<int> Solution::solve(int A, int B, int C, int D) 
{
    priority_queue <long long int, vector <long long int>, greater <long long int>> minh;
    minh.push(A);
    unordered_map <long long int,bool> seen;
    seen[A] = true;
    if(!seen[B])
    {
        minh.push(B);
        seen[B] = true;
    }
    if(!seen[C])
    {
        seen[C] = true;
        minh.push(C);
    }
    vector <int> ans;
    for(long long int i=0;i<D;i++)
    {
        long long int temp=minh.top();
        minh.pop();
        if(!seen[temp*A])
        {
            seen[temp*A] = true;
            minh.push(temp*A);
        }
        if(!seen[temp*B])
        {
            seen[temp*B] = true;
            minh.push(temp*B);
        }
        if(!seen[temp*C])
        {
            seen[temp*C] = true;
            minh.push(temp*C);
        }
        ans.push_back(temp);
    }
    return ans;
    
}
