bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    vector <int> toSort;
    unordered_map <int,int> ac;
    unordered_map <int,int> dc;
    for(int i=0;i<arrive.size();i++)
    {
        toSort.push_back(arrive[i]);
        ac[arrive[i]]++;
    }
    for(int i=0;i<depart.size();i++)
    {
        toSort.push_back(depart[i]);
        dc[depart[i]]++;
    }
    int curr=0;
    sort(toSort.begin(),toSort.end());
    unordered_map<int,bool> seen;
    for(int i=0;i<toSort.size();i++)
    {
        if(!seen[toSort[i]])
        {
            seen[toSort[i]] = true;
            curr+=ac[toSort[i]]-dc[toSort[i]];
            if(curr>K)
                return 0;
        }
    }
    return 1;
}
