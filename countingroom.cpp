#include <bits/stdc++.h>
using namespace std;

int n, m, rooms;
vector<string> grid;
vector<vector<bool>> vis;

vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool isValid(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) return false;
    if (grid[x][y] == '#') return false;   
    if (vis[x][y]) return false;           
    return true;
}

void dfs(int x, int y) {
    vis[x][y] = true;
    for (auto [dx, dy] : moves) {
        int nx = x + dx, ny = y + dy;
        if (isValid(nx, ny)) 
          dfs(nx, ny);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++) cin >> grid[i];
    vis.assign(n, vector<bool>(m, false));

    rooms = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                dfs(i, j);
                rooms++;
            }
        }
    }
    cout << rooms << "\n";
}
