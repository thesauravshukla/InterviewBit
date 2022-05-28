int Solution::solve(vector<vector<int> > &A) 
{
    unordered_map <int,int> started;
    unordered_map <int,int> ended;
    vector <int> toSort;
    for(int i=0;i<A.size();i++)
    {
        toSort.push_back(A[i][0]);
        toSort.push_back(A[i][1]);
        started[A[i][0]]++;
        ended[A[i][1]]++;
    }
    int curr=0,ans=0;
    sort(toSort.begin(),toSort.end());
    unordered_map <int,bool> seen;
    for(int i=0;i<toSort.size();i++)
    {
        if(!seen[toSort[i]])
        {
            curr += started[toSort[i]]-ended[toSort[i]];
            ans = max(ans,curr);
            seen[toSort[i]] = true;
        }
    }
    return ans;
    
}

