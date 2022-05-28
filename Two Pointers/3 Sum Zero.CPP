vector<vector<int> > Solution::threeSum(vector<int> &A) 
{
    sort(A.begin(),A.end());
    vector<vector <int>> ans;
    if(A.size()<3)
        return ans;
    map<vector <int>,bool> seen;
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1,r=A.size()-1;
        while(l<r)
        {
            long long int s = (long long int)((long long int)A[i]+(long long int)A[l]+(long long int)A[r]);
            if(s == 0)
            {
                vector <int> temp;
                temp.push_back(A[i]);
                temp.push_back(A[l]);
                temp.push_back(A[r]);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    ans.push_back(temp);
                }
                l++;
                r--;
            }
            else if(A[i]+A[l]+A[r] > 0)
            {
                r--;
            }
            else
                l++;
        }
    }
    return ans;
    
}
