vector<int> Solution::twoSum(const vector<int> &A, int B) 
{
    unordered_map <int,bool> isPresent;
    unordered_map<int,vector<int>> inmap;
    vector <int> ans;
    for(int i=0;i<A.size();i++)
    {
        isPresent[A[i]]=true;
        inmap[A[i]].push_back(i+1);
    }
    for(int i=0;i<A.size();i++)
    {
        if(isPresent[B-A[i]])
        {
            if((B-A[i])!=A[i])
            {
                vector <int> temp;
                temp.push_back(inmap[B-A[i]][0]);
                temp.push_back(i+1);
                sort(temp.begin(),temp.end());
                if((ans.size()==0)||(ans[1]>temp[1])||((ans[1]==temp[1])&&(ans[0]>temp[0])))
                {
                    ans.clear();
                    ans.push_back(temp[0]);
                    ans.push_back(temp[1]);
                } 
            }
            else if(((B-A[i])==A[i])&&(inmap[A[i]].size() > 1))
            {
                vector <int> temp;
                temp.push_back(inmap[B-A[i]][1]);
                temp.push_back(i+1);
                sort(temp.begin(),temp.end());
                if((ans.size()==0)||(ans[1]>temp[1])||((ans[1]==temp[1])&&(ans[0]>temp[0])))
                {
                    ans.clear();
                    ans.push_back(temp[0]);
                    ans.push_back(temp[1]);
                }
            }
        }
    }
    return ans;
    
    
}
