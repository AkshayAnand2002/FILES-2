https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>v;
        queue<int>q;
        q.push(0);
        //1st element pushed
        vector<int> vis(V,0);
        //visited array
        vis[0]=1;
        while(!q.empty()){
            int td=q.front();
            //taking 1st elem
            q.pop();
            //popping
            v.push_back(td);
            //popped elem are traversed hence added in final array v.
            for(auto x:adj[td]){
                //checking adjacent elements
                //adjacent elems are visited
                //and pushed back in queue.
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
        return v;
    }
};
