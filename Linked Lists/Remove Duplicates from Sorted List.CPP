/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) 
{
    ListNode* curr = A;
    while(curr)
    {
        while((curr)&&(curr->next)&&(curr->val == curr->next->val))
            curr->next = curr->next->next;
        curr=curr->next;
    }
    return A;
    
}
Time taken: 3 min.
Score:
300
/
300
C (Gcc-4.8)
Old view
3456789101112131415161718192021222324
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {


