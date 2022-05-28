int isPossible(vector <int> A, int V)
{
    int count=0,sum=0,i=0;
    while(i<A.size())
    {
        if(sum+A[i] <= V)
        {
            sum+=A[i];
            i++;
        }
        else
        {
            sum=0;
            count++;    
        }
    }
    if(sum>0)
        count++;
    return count;
}
int Solution::books(vector<int> &A, int B) 
{
   if(A.size()<B)
        return -1;
   int maxi=A[0],sum=0;
   for(int i=0;i<A.size();i++)
   {
       sum+=A[i];
       maxi=max(A[i],maxi);
   }
   int ans=maxi;
   int left=maxi,right=sum;
   while(left<=right)
   {
       int mid = left + (right-left)/2;
       if(isPossible(A,mid)<B)
       {
           right=mid-1;
       }
       else if(isPossible(A,mid)>B)
       {
           left = mid+1;
       }
       
       else
       {
           ans = mid;
           right= mid-1;
       }
   }
   return ans;
}
