class Solution {
  public:
    bool issafe(vector<vector<int>>& adj,int idx, vector<int>& color,int c){
        
        for(int i = 0; i < adj[idx].size(); i++){
            int neighbour = adj[idx][i];
            if(color[neighbour] == c) return false;
        }
        return true;
    }
    
    bool helperFunc(vector<vector<int>>& adj,int m,vector<int>& color,int idx) {
        if(idx == adj.size()) return true;
        for(int i = 1; i <= m; i++) {
           if(issafe(adj,idx,color,i)){
               color[idx] = i;
               if(helperFunc(adj,m,color,idx+1)) return true;
               color[idx] = 0;
           }
        }
        return false;
    }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>> adj(v);
        for(vector<int> edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> color(v,0);
        return helperFunc(adj,m,color,0);
    }
};
