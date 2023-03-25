https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
class Solution {
  public:
    vector<int> v;
    void solve(int src,vector<int> &vis,vector<int> adj[]){
        vis[src]=1;
        //src vertex visited.
        v.push_back(src);
        //src is traversed so we push it back into v.
        for(auto x:adj[src]){
            //checking for adjacent nodes
            if(!vis[x]){
                //if not visited then move to that vertex for traversal.
                solve(x,vis,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        v.clear();
        //clearing vector if it already has some data.
        vector<int>vis(V,0);
        //vector of size V initialized with 0.
        solve(0,vis,adj);
        //source vertex is 0.
        return v;
    }
};
