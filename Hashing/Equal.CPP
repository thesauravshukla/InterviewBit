vector<int> Solution::equal(vector<int> &A) 
{
    unordered_map<int,pair <int,int>> cache;
    unordered_map<int,bool> isPresent;
    vector <int> ans;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if(!isPresent[A[i]+A[j]])
            {
                isPresent[A[i]+A[j]] = true;
                pair<int,int> temp;
                temp.first = i;
                temp.second = j;
                cache[A[i]+A[j]] = temp;
            }
            else
            {
                if(i!=cache[A[i]+A[j]].second)
                {
                    if(ans.size()==0)
                    {
                        ans.push_back(cache[A[i]+A[j]].first);
                        ans.push_back(cache[A[i]+A[j]].second);
                        ans.push_back(i);
                        ans.push_back(j);        
                    }
                    else
                    {
                        if((ans[0]>cache[A[i]+A[j]].first)||((ans[0]==cache[A[i]+A[j]].first)&&(ans[1]>cache[A[i]+A[j]].second))||((ans[0]==cache[A[i]+A[j]].first)&&(ans[1]==cache[A[i]+A[j]].second)&&(ans[2]>i))||((ans[0]==cache[A[i]+A[j]].first)&&(ans[1]==cache[A[i]+A[j]].second)&&(ans[2]==i)&&(ans[3]>j)))
                        {
                            ans[0] = cache[A[i]+A[j]].first;
                            ans[1] = cache[A[i]+A[j]].second;
                            ans[2] = i;
                            ans[3] = j; 
                        }
                    }
                }
            }
        }
    }
    return ans;
    
}
