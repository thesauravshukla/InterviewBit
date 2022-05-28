int Solution::t2Sum(TreeNode* A, int B) 
{
    vector <int> arr;
    queue <TreeNode*> q;
    map <int,int> count;
    q.push(A);
    while(q.size()>0)
    {
        if(q.front()->left)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right)
        {
            q.push(q.front()->right);
        }
        arr.push_back(q.front()->val);
        count[q.front()->val]++;
        q.pop();
    }
    for(int i=0;i<arr.size();i++)
    {
        if((B-arr[i]!=arr[i])&&(count[B-arr[i]]>0))
            return 1;
        else if((B-arr[i]==arr[i])&&(count[arr[i]]>1))
            return 1;
    }
    return 0;
    
}
