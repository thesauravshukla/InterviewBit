vector<int> Solution::solve(vector<int> &A, vector<int> &B) 
{
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int C = A.size();
    int r1 = A.size()-1, r2= B.size()-1;
    vector <int> ans;
    priority_queue <pair <int, pair <int,int>>> maxh;
    pair <int,int> t1;
    t1.first = A.size()-1;
    t1.second = A.size()-1;
    pair <int, pair<int,int>> t2;
    t2.first = A[A.size()-1]+B[B.size()-1];
    t2.second = t1;
    maxh.push(t2);
    map <pair <int,int>, bool> seen;
    seen[t1] = true;
    while(C)
    {
        ans.push_back(maxh.top().first);
        C--;
        pair <int,int> t3;
        t3.first = maxh.top().second.first - 1;
        t3.second = maxh.top().second.second;
        pair <int, pair<int,int>> t4;
        t4.first = A[maxh.top().second.first - 1]+B[maxh.top().second.second];
        t4.second = t3;
        if(!seen[t3])
        {
            seen[t3] = true;
            maxh.push(t4);
        }
        t3.first = maxh.top().second.first;
        t3.second = maxh.top().second.second - 1;
        t4.first = A[maxh.top().second.first]+B[maxh.top().second.second - 1];
        t4.second = t3;
        if(!seen[t3])
        {
            seen[t3] = true;
            maxh.push(t4);   
        }
         maxh.pop();
    }
    return ans;
}