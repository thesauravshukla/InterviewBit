vector<Interval> Solution::insert(vector<Interval> &a, Interval n) {
        vector<Interval> res;
        int sz = a.size();
        int i = 0;
        while(i<sz && a[i].end<n.start){
            res.push_back(a[i++]);
        }
        if(i<sz)
            n.start = min(n.start, a[i].start);
        while(i<sz && a[i].start<=n.end)
            i++;
        if(i>0)
            n.end = max(a[i-1].end, n.end);
        res.push_back(n);
        while(i<sz)
            res.push_back(a[i++]);
        return res;
}