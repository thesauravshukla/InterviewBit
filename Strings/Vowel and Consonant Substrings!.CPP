bool isVowel(char c)
{
    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
        return true;
    else
        return false;
}
int Solution::solve(string A) 
{
   vector <int> vpos;
   vector <int> cpos;
   int ans=0;
   for(int i=0;i<A.size();i++)
   {
       if(isVowel(A[i]))
            vpos.push_back(i);
        else
            cpos.push_back(i);
   }
   int p=0;
   for(int i=0;i<vpos.size();i++)
   {
        while((p<cpos.size())&&(cpos[p]<vpos[i]))
            p++;
        ans+=(cpos.size()-p);
   }
  p=0;
    for(int i=0;i<cpos.size();i++)
   {
        while((p<vpos.size())&&(vpos[p]<cpos[i]))
            p++;
        ans+=(vpos.size()-p);
   }
   return ans;
    
}
