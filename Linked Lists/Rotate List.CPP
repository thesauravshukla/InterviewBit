listnode* rotateRight(listnode* A, int k) 
{
    int s=0;
    if(!A)
        return A;
    if(!(A->next))
        return A;
    listnode *curr=A;
    while(curr)
    {
        s++;
        curr=curr->next;
    }
    if(k>s)
    {
        k = k%s;
        if(!k)
            return A;
    }
    if(s==k)
        return A;
    s=s-k;
    curr=A;
    while(s!=1)
    {
        s--;
        curr=curr->next;
    }
    listnode *head=curr->next;
    listnode *temp=head;
    curr->next=NULL;
    while((temp)&&(temp->next))
    {
        temp=temp->next;
    }
    temp->next=A;
    return head;
}
