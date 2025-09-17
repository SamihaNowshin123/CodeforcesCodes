#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> G(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v; 
            cin >> u >> v;
            // Undirected
            G[u].push_back(v);
            G[v].push_back(u);
        }

        int s; 
        cin >> s;

        // BFS
        vector<int> dist(n + 1, -1);
        queue<int> q;
        dist[s] = 0;
        q.push(s);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : G[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 6;   
                    q.push(v);
                }
            }
        }

       
        bool first = true;
        for (int i = 1; i <= n; i++) {
            if (i == s) continue;
            if (!first) cout << ' ';
            cout << dist[i];
            first = false;
        }
        cout << '\n';
    }
    return 0;
}
