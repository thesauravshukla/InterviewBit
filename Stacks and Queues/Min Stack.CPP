stack <int> currmin;
stack <int> mainst;
MinStack::MinStack() 
{
    while(!currmin.empty())
        currmin.pop();
    while(!mainst.empty())
        mainst.pop();
}
void MinStack::push(int x) 
{
    mainst.push(x);
    if(currmin.size()==0 || currmin.top()>=x)
        currmin.push(x);
}

void MinStack::pop() 
{
    if(!mainst.size())
        return;
    if(currmin.top() == mainst.top())
        currmin.pop();
    mainst.pop();
}

int MinStack::top() 
{
    if(!mainst.size())
        return -1;
    return mainst.top();
}

int MinStack::getMin() 
{
    if(!currmin.size())
        return -1;
    return currmin.top();
}

