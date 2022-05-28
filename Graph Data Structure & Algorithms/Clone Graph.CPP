/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) 
{
    if(!node)
        return node;
    map <int,bool> seen;
    vector <int> nodes;
    map <int,vector <int>> n;
    map <int,UndirectedGraphNode*> nodeof;
    queue <UndirectedGraphNode*> q;
    nodes.push_back(node->label);
    seen[node->label] = true;
    q.push(node);
    while(q.size())
    {
        for(int i=0;i<q.front()->neighbors.size();i++)
        {
            n[q.front()->label].push_back(q.front()->neighbors[i]->label);
            if(!seen[q.front()->neighbors[i]->label])
            {
                nodes.push_back(q.front()->neighbors[i]->label);
                q.push(q.front()->neighbors[i]);
                seen[q.front()->neighbors[i]->label] = true;
            }
        }
        q.pop();
    }
    for(int i=0;i<nodes.size();i++)
    {
        UndirectedGraphNode* temp = new UndirectedGraphNode(nodes[i]);
        nodeof[nodes[i]] = temp;
    }
    for(int i=0;i<nodes.size();i++)
    {
        for(int j=0;j<n[nodes[i]].size();j++)
        {
            nodeof[nodes[i]]->neighbors.push_back(nodeof[n[nodes[i]][j]]);
        }
    }
    return nodeof[node->label];
}

