vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    vector <int> ans;
    long long int n=A.size();
    long long int sum = (n)*(n+1)/2, sqsum = ((n)*(n+1)*(2*n+1))/6 ;
    for(int i=0;i<A.size();i++)
    {
        sum-=(long long int)A[i];
        sqsum-=(long long int)A[i]*(long long int)A[i];
    }
    long long int temp =(long long int)((long long int)sum + (long long int)sqsum/(long long int)sum)/2 ;
    ans.push_back(temp);
    temp-=(long long int)sum;
    ans.push_back(temp);
    reverse(ans.begin(),ans.end());
    return ans;
    
    
    
    
    
}
