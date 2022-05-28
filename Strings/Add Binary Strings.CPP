string Solution::addBinary(string A, string B) 
{
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    if(A.size()==0)
        return B;
    else if(B.size()==0)
        return A;
    string ans="";
    int carry=0;
    for(int i=0;i<min(A.size(),B.size());i++)
    {
        if((A[i]=='1')&&(B[i]=='1'))
        {
            if(!carry)
            {
                ans+='0';
                carry=1;    
            }
            else
            {
                ans+='1';
                carry=1;
            }
            
        }
        else if(((A[i]=='1')&&(B[i]=='0'))||((A[i]=='0')&&(B[i]=='1')))
        {
            if(!carry)
            {
                ans+='1';
                carry=0;    
            }
            else
            {
                ans+='0';
                carry=1;
            }
        }
        else if((A[i]=='0')&&(B[i]=='0'))
        {
            if(!carry)
            {
                ans+='0';
                carry=0;    
            }
            else
            {
                ans+='1';
                carry=0;
            }
        }
    }
    for(int i=min(A.size(),B.size());i<max(A.size(),B.size());i++)
    {
        if(A.size() > B.size())
        {
            if(A[i]=='1')
            {
                if(carry)
                {
                    ans+='0';    
                }
                else
                {
                    ans+='1';
                }
            }
            else
            {
                if(carry)
                {
                    ans+='1';
                    carry=0;
                }
                else
                {
                    ans+='0';
                }
            }
        }
        else
        {
            if(B[i]=='1')
            {
                if(carry)
                {
                    ans+='0';    
                }
                else
                {
                    ans+='1';
                }
            }
            else
            {
                if(carry)
                {
                    ans+='1';
                    carry=0;
                }
                else
                {
                    ans+='0';
                }
            }
        }
    }
    if(carry)
        ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}
