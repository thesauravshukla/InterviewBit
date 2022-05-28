int Solution::candy(vector<int> &A) 
{
   vector <int> temp(A.size(),1);
   for(int i=1;i<A.size();i++)
   {
       if(A[i] > A[i-1])
       {
           temp[i] = temp[i-1] + 1;
       }
   }
   for(int i=A.size()-2;i>=0;i--)
   {
       if(A[i] > A[i+1])
       {
           temp[i] = max(temp[i],temp[i+1]+1);
       }
   }
   int ans=0;
   for(int i=0;i<temp.size();i++)
   {
       ans+=temp[i];
   }
   return ans;
}
