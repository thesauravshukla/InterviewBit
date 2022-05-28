int Solution::knight(int A, int B, int C, int D, int E, int F) 
{
    int l=0;
    queue <pair <int,int>> q;
    map<pair<int,int>, bool> seen;
    q.push(make_pair(C,D));
    while(q.size())
    {
        int s = q.size();
        for(int i=0;i<s;i++)
        {
            if((q.front().first == E)&&(q.front().second == F))
            return l;
            if((q.front().first > 2)&&(q.front().second > 1))
            {
                pair <int,int> temp = make_pair(q.front().first - 2, q.front().second - 1);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first > 2)&&(q.front().second < B))
            {
                pair <int,int> temp = make_pair(q.front().first - 2, q.front().second + 1);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first < A-1)&&(q.front().second < B))
            {
                pair <int,int> temp = make_pair(q.front().first + 2, q.front().second + 1);
                if(!seen[temp])
                {   
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first < A-1)&&(q.front().second > 1))
            {
                pair <int,int> temp = make_pair(q.front().first + 2, q.front().second - 1);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first > 1)&&(q.front().second > 2))
            {
                pair <int,int> temp = make_pair(q.front().first - 1, q.front().second - 2);
                if(!seen[temp])
                {   
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first < A)&&(q.front().second > 2))
            {
                pair <int,int> temp = make_pair(q.front().first + 1, q.front().second - 2);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first < A)&&(q.front().second < B-1))
            {
                pair <int,int> temp = make_pair(q.front().first + 1, q.front().second + 2);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            if((q.front().first > 1)&&(q.front().second < B-1))
            {
                pair <int,int> temp = make_pair(q.front().first - 1, q.front().second + 2);
                if(!seen[temp])
                {
                    seen[temp] = true;
                    q.push(temp);
                }
            }
            q.pop();
        }
        l++;
    }
    return -1;
}

