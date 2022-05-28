int Solution::maxProduct(const vector<int> &A) 
{
   int maxi=A[0],mini=A[0],ans=A[0];
   for(int i=1;i<A.size();i++)
   {
       int temp=maxi,temp2=mini;
       maxi=max(temp*A[i],max(temp2*A[i], A[i]));
       mini=min(temp*A[i],min(temp2*A[i], A[i]));
       if(maxi>ans)
        ans=maxi;
   }
   return ans;
}
