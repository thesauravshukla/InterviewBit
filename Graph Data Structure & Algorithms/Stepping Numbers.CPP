vector<int> Solution::stepnum(int A, int B) 
{
    queue <int> q;
    for(int i=1;i<=9;i++)
    {
        q.push(i);
    }
    vector <int> ans;
    if(A<=0)
        ans.push_back(0);
    while(q.size()>0)
    {
        if(q.front()>=A && q.front()<=B)
            ans.push_back(q.front());
        int temp=q.front()%10;
        if(temp>0)
        {
            if(10*q.front() + (temp-1) <= B)
                q.push(10*q.front() + (temp-1));
        }
        if(temp<9)
        {
            if(10*q.front() + (temp+1) <= B)
                q.push(10*q.front() + (temp+1));
        }
        q.pop();
    }
    return ans;
}
