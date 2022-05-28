int Solution::colorful(int A) 
{
    vector <int> digit;
    while(A)
    {
        int temp = A%10;
        digit.push_back(temp);
        A=A/10;
    }
    reverse(digit.begin(),digit.end());
    unordered_map<int,bool> seen;
    for(int i=0;i<digit.size();i++)
    {
        int prod=1;
        for(int j=i;j>=0;j--)
        {
            prod=digit[j]*prod;
            if(seen[prod])
                return 0;
            else
            {
                seen[prod] = true;
            }
        }
    }
    return 1;
    
}
