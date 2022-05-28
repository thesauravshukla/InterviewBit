vector<int> Solution::plusOne(vector<int> &A) 
{
    reverse(A.begin(),A.end());
    int carry=1,temp=0;
    for(int i=0;i<A.size();i++)
    {
        A[i] += carry;
        temp=A[i];
        if(A[i]>=10)
        {
            A[i] = temp%10;
            carry = temp/10;
        }
        else
            carry = 0;
    }
    if(carry > 0)
    A.push_back(carry);
    while((A[A.size()-1]==0)&&(A.size()>0))
        A.pop_back();
    reverse(A.begin(),A.end());
    return A;
}
