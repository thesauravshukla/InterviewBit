 void inord(TreeNode* root, vector <int> &temp)
    {
        if(!root)
         return;
        else
        {       
            inord(root->left, temp);
            temp.push_back(root->val);
            inord(root->right, temp);
        }
    }
       TreeNode *A = NULL;
    vector <int> storage;
    int curr=0;
BSTIterator::BSTIterator(TreeNode *root) 
{
     A=root;
    inord(A,storage);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() 
{
    return (curr<storage.size());
}

/** @return the next smallest number */
int BSTIterator::next() 
{
    int tem=storage[curr];
            curr++;
            return tem;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
