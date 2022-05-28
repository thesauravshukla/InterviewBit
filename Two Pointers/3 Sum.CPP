int Solution::threeSumClosest(vector<int> &A, int B) 
{
    sort(A.begin(),A.end());
    int s=0;
    int d=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        int left=i+1,right=A.size()-1;
        while(left<right)
        {
            int temp = A[left]+A[right]+A[i];
            if(abs(temp-B)<d)
            {
                d=abs(temp-B);
                s=temp;
            }        
            if(temp==B)
            {
                return temp;    
            }
            else if(temp>)
            else
            {
                left++;
            }
                
        }
    }
    return s;
    
    
}
