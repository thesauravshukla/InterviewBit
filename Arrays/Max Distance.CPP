int Solution::maximumGap(const vector<int> &A) 
{
    vector <pair <int,int>> toSort;
    for(int i=0;i<A.size();i++)
    {
        toSort.push_back(make_pair(A[i],i));
    }
    sort(toSort.begin(),toSort.end());
    int mini=toSort[0].second,maxi=0;
    for(int i=1;i<toSort.size();i++)
    {
        if(((toSort[i].second - mini) > maxi)
            maxi = toSort[i].second - mini;
        if(toSort[i].second < mini)
            mini = toSort[i].second;
    }
    return maxi;
}
