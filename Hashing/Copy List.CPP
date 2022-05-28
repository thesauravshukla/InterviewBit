/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) 
{
    unordered_map<RandomListNode*,RandomListNode*> mapping;
    RandomListNode* curr = A;
    while(curr)
    {
        RandomListNode* temp = new RandomListNode(curr->label);
        mapping[curr] = temp;
        curr = curr->next;
    }
    curr = A;
    while(curr)
    {
        if(curr->next)
            mapping[curr]->next = mapping[curr->next];
        if(curr->random)
            mapping[curr]->random = mapping[curr->random];
        curr = curr->next;
        
    }
    return mapping[A];
}
