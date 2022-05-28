unsigned int Solution::reverse(unsigned int A) 
{
    unsigned long long int ans = 0,fact=1;
    vector <unsigned long long int> toReverse;
    for(int i=0;i<32;i++)
    {
        toReverse.push_back(A%2);
        A=A/2;
    }
    for(int i=toReverse.size()-1;i>=0;i--)
    {
        ans+=fact*toReverse[i];
        fact*=2;
    }
    return ans;
}
