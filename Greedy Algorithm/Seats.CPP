int Solution::seats(string A) 
{
    vector <long long int> pos;
    long long int m=0,c=0;
    for(long long int i=0;i<A.size();i++)
    {
        if(A[i]!='.')
        {
            pos.push_back(i-c);
            c++;
        }
    }if((!c)||(c==1))
        return 0;
    if(pos.size()%2==0)
    {
        m = (pos[(pos.size()-1)/2]+pos[(pos.size()+1)/2])/2  ;
    }
    else
    {
        m = pos[(pos.size())/2];
    }
    long long int s=0;
    for(long long int i=0;i<pos.size();i++)
    {
        s+=abs(m-pos[i]);
    }
    return s%10000003;
    
}
Time taken: 33 min.
