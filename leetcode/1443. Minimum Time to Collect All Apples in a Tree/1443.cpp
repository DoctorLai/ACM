// https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/
// MEDIUM, TREE, DFS

class Solution {
private: 
    int solve ( int n , vector<vector<int>> &adj, vector<bool> &hasApple ,int u , int p =-1 ){
        int ans = 0;
        for ( auto v : adj[u]){
            if ( v!=p ) ans+= solve(n,adj,hasApple,v,u);
        }
        if ( u == 0 ) return ans;
        if ( hasApple[u] || ans > 0) return ans+2;
        return 0;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        int ans = 0;
        vector<vector<int>> adj(n);
        for ( auto &v : edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        return solve(n,adj,hasApple,0);

    }
};
