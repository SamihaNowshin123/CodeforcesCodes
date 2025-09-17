#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define int long long
#define pb push_back
#define mp make_pair
#define co(x1) cout << x1 << "\n"
#define ct(x1) cout << x1 << " "

const int MAX = 2e5 + 5;
int rows, cols, maxCount, flag, maxVal, rowCount[MAX], colCount[MAX];

void solve() {
    cin >> rows >> cols;
    maxCount = flag = maxVal = 0;

    vector<vector<int>> matrix(rows, vector<int>(cols));



    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            maxVal = max(maxVal, matrix[i][j]);
            rowCount[i] = colCount[j] = 0;
        }
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == maxVal) {
                rowCount[i]++;
                colCount[j]++;
                maxCount++;
            }
        }
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (maxCount == rowCount[i] + colCount[j] - (matrix[i][j] == maxVal)) {
                flag = 1;
            }
        }
    }

    co(maxVal - flag);
}

#undef int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
