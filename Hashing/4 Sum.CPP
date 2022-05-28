vector<vector<int> > Solution::fourSum(vector<int> &A, int B) 
{
    vector <vector <int>> ans;
    sort(A.begin(),A.end());
    map <vector <int>, bool> seen;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int left = j+1,right=A.size()-1;
            while(left<right)
            {
                if(A[i]+A[j]+A[left]+A[right] == B)
                {
                    vector <int> temp;
                    temp.push_back(A[i]);
                    temp.push_back(A[j]);
                    temp.push_back(A[left]);
                    temp.push_back(A[right]);
                    if(!seen[temp])
                    ans.push_back(temp);
                    seen[temp]=true;
                    left++;
                    right--;
                }
                else if(A[i]+A[j]+A[left]+A[right] < B)
                    left++;
                else
                    right--;
            }
        }
    }
    // sort(ans.begin(),ans.end());
    return ans;
    
    
}
