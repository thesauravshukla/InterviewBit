int c;
LRUCache::LRUCache(int capacity) 
{
    c = capacity;
}
int timeelap=1;

int cap=0;
map <int,int> keyval;
map <int,bool> isPresent;
priority_queue <pair <int,int>> maxh;
int LRUCache::get(int key) 
{
    if(isPresent[key])
    {
        return keyval[key];
    }
    else
    return -1;
}
void LRUCache::set(int key, int value) 
{
    if(cap<c)
    {
        pair <int,int> temp;
        temp.first=timeelap;
        temp.second=key;
        maxh.push(temp);
        isPresent[key]=true;
        keyval[key]=value;
        cap++;
        timeelap++;
    }
    else
    {
        
        isPresent[maxh.top().second] = false;
        maxh.pop();
        pair <int,int> temp;
        temp.first=timeelap;
        temp.second=key;
        maxh.push(temp);
        isPresent[key]=true;
        keyval[key]=value;
        timeelap++;
    }
    
}
