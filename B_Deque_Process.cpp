
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        
        string ans;
        ans.reserve(n);

        for (int i = 0; i < n / 2; ++i) {
            int L = a[i], R = a[n - 1 - i];
            if (L < R) {
                if (i & 1) ans += "LR";
                else       ans += "RL";
            } else {
                if (i & 1) ans += "RL";
                else       ans += "LR";
            }
        }
        if (n & 1) ans.push_back('L');

        cout << ans << '\n';
    }
    return 0;
}
