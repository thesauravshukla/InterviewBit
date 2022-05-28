int Solution::maxSpecialProduct(vector<int> &A) 
{
    stack <pair <int,int>> nmax;
    stack <pair <int,int>> pmin;
    vector <pair <int,int>> pminv(A.size());
    vector <pair <int,int>> nmaxv(A.size());
    for(int i=A.size()-1;i>=0;i--)
    {
        while((!nmax.empty())&&(A[i]>=nmax.top().first))
            nmax.pop();
        if(nmax.empty())
        {
            pair <int,int> temp;
            temp.first=-1;
            temp.second=-1;
            nmaxv[i]=temp;
        }
        else
        {
            nmaxv[i]=nmax.top();
        }
        pair <int,int> temp;
        temp.first = A[i];
        temp.second = i;
        nmax.push(temp);
        
    }
    for(int i=0;i<A.size();i++)
    {
        while((!pmin.empty())&&(A[i]<=pmin.top().first))
            pmin.pop();
        if(pmin.empty())
        {
            pair <int,int> temp;
            temp.first=-1;
            temp.second=-1;
            pminv[i]=temp;
        }
        else
        {
            pminv[i]=pmin.top();
        }
        pair <int,int> temp;
        temp.first = A[i];
        temp.second = i;
        pmin.push(temp);
    }
    int ans=0;
    for(int i=1;i<nmaxv.size()-1;i++)
    {
        cout<<"("<<nmaxv[i].second<<","<<pminv[i].second<<")";
        if((nmaxv[i].first!=-1)||((pminv[i].first)!=-1))
            ans = max(ans,(pminv[i].second)*(nmaxv[i].second));
    }
    return ans;
    
    
}
