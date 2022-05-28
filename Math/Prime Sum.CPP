vector<int> Solution::primesum(int A) 
{
    vector <int> ans;
    int flag=0;
    if(A==4)
    {
        ans.push_back(2);
        ans.push_back(2);
        return ans;
    }
    for(int i=3;i<A;i+=2)
    {
        int temp=A-i;
        for(int j=2;j*j<i;j++)
        {
            if(i%j == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(int j=2;j*j<temp;j++)
            {
                if(temp%j == 0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            ans.push_back(i);
            ans.push_back(temp);
            return ans;
        }
        else
        {
            flag=0;
        }
    }
    return ans;
    
}
