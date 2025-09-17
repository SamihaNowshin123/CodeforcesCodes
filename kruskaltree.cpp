#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

void make(int v) {
    parent[v] = v;
}

int find(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]); 
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        parent[b] = a;
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    parent.resize(V + 1); 

    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < E; i++) {
        int u, v, wt;
        cin >> u >> v >> wt; 
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end()); 

    for (int i = 1; i <= V; i++) {
        make(i); 
    }

    int total_cost = 0;
    for (auto &edge : edges) {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if (find(u) == find(v)) 
            continue; 

        Union(u, v); 
        total_cost += wt;
    }

    cout << total_cost << endl;

    return 0;
}

