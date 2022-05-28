vector<int> Solution::flip(string A) 
{
    vector <int> temp;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] == '0')
            temp.push_back(1);
        else
            temp.push_back(-1);
    }
    int curr=0,ans=0,l=0,r=0,currl=0;
    for(int i=0;i<temp.size();i++)
    {
        curr+=temp[i];
        if(curr>ans)
        {
            r = i;
            l = currl;
        }
        ans = max(ans,curr);
        if(curr<0)
        {
            currl = i+1;
            curr=0;
        }
    }
    vector <int> retans;
    if(ans==0)
        return retans;
    retans.push_back(l+1);
    retans.push_back(r+1);
    return retans;
}
