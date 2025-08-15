#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        unordered_map<int,list<int>> adj;
        for ( int i = 1; i < n; i++ ) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if ( n <= 2 ) {
            cout << 0 << endl;
            continue;
        }
        int leaf = 0;
        vector<int> vis( n+1, 0);
        for ( int i = 1; i <= n; i++ ) {
            if ( adj[i].size() == 1 ) {
                vis[i] = 1;
                leaf++;
            }
        }
        int ans = 0;
        for ( int i = 1; i <= n; i++ ) {
            int cnt = 0;
            for ( auto it : adj[i] ) if ( vis[it] ) cnt++;
            
            ans = max( ans, cnt );
        } 
        cout << leaf - ans << endl;
    }
    return 0;
}
