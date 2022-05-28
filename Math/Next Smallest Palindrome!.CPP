class Solution{
public:

vector<int> generateNextPalindrome(int A[], int n) 
{

vector<int>ans;
int k=0;
for(int i=n/2-1;i>=0;i--)
{
    if(A[n-i-1] !=A[i])
    {
        k=1;
    }
    A[n-i-1]= A[i];
}


int flag=0;
if(A[n/2]!=9  && n%2!=0)
{
    A[n/2]+=1;
    
    
for(int i=0;i<n;i++)
{
    ans.push_back(A[i]);
}


    return ans;
}

else
{

if(n%2!=0)
{
A[n/2]=0;  
}

for(int i=n/2-1;i>=0;i--)
{

if(A[i]!=9 )
{
    flag=1;
    A[i]++;
    A[n-i-1]++;
  break;
}
else
{
   A[i]=0; 
   A[n-i-1]='0';

}

    
}

}


for(int i=0;i<n;i++)
{
    ans.push_back(A[i]);
}


if(!flag)
{
    ans[0]=1;
    ans.push_back(1);
}


return  ans;

}