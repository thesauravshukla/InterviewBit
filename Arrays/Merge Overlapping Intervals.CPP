/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) 
{
    stack <Interval> s;
    sort(A.begin(),A.end(), compareInterval);
    for(int i=0;i<A.size();i++)
    {
        if(s.size()==0)
        {
            s.push(A[i]);
        }
        else
        {
            if(s.top().end < A[i].start)
                s.push(A[i]);
            else
                s.top().end = max(s.top().end, A[i].end);
        }
    }
    vector <Interval> ans;
    while(s.size()>0)
    {
        ans.push_back(s.top());
        s.pop();
    }
    sort(ans.begin(),ans.end(),compareInterval);
    return ans;
}
