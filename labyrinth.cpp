#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    int sr = -1, sc = -1, tr = -1, tc = -1;

    for (int i = 0; i < n; ++i) {
        string s; 
        cin >> s;
        for (int j = 0; j < m; ++j) {
            grid[i][j] = s[j];
            if (s[j] == 'A') { sr = i; sc = j; }
            if (s[j] == 'B') { tr = i; tc = j; }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));
    vector<vector<char>> mv(n, vector<char>(m, 0));

    const int dr[4] = {-1, 1, 0, 0};
    const int dc[4] = { 0, 0,-1, 1};
    const char dcChar[4] = {'U','D','L','R'};

    queue<pair<int,int>> q;
    q.push({sr, sc});
    vis[sr][sc] = true;

    bool found = false;
    while (!q.empty() && !found) {
        auto [r, c] = q.front(); q.pop();

        for (int k = 0; k < 4; ++k) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
            if (grid[nr][nc] == '#') continue;
            if (vis[nr][nc]) continue;

            vis[nr][nc] = true;
            parent[nr][nc] = {r, c};
            mv[nr][nc] = dcChar[k];
            q.push({nr, nc});

            if (grid[nr][nc] == 'B') {
                tr = nr; tc = nc;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "NO\n";
        return 0;
    }

    vector<char> path;
    int r = tr, c = tc;
    while (!(r == sr && c == sc)) {
        path.push_back(mv[r][c]);
        auto p = parent[r][c];
        r = p.first; c = p.second;
    }
    reverse(path.begin(), path.end());

    cout << "YES\n" << path.size() << "\n";
    for (char ch : path) cout << ch;
    cout << "\n";
    return 0;
}
