vector<int> Solution::order(vector<int> &A, vector<int> &B) 
{
    vector <int> ans(A.size(),-1);
    vector <pair <int,int>> toSort;
    for(int i=0;i<A.size();i++)
    {
        toSort.push_back(make_pair(A[i],B[i]));
    }
    sort(toSort.begin(),toSort.end());
    vector <int> temp;
    for(int i=0;i<A.size();i++)
    {
        temp.push_back(i);
    }
    for(int i=0;i<toSort.size();i++)
    {
        ans[temp[toSort[i].second]] = toSort[i].first;
        auto it = temp.begin();
        temp.erase(it+toSort[i].second);
    }
    return ans;
    
}
