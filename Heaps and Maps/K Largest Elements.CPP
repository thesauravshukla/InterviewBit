vector<int> Solution::solve(vector<int> &A, int B) 
{
    priority_queue <int, vector <int>, greater <int>> min_heap;
    for(int i=0;i<A.size();i++)
    {
        min_heap.push(A[i]);
        if(min_heap.size()>B)
            min_heap.pop();
    }
    vector <int> ans;
    while(min_heap.size() > 0)
    {
        ans.push_back(min_heap.top());
        min_heap.pop();
    }
    return ans;
    
}
