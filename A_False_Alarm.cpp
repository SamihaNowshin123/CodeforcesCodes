
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    int first = -1, last = -1;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1) {
            if(first == -1) first = i;
            last = i;
        }
    }

    if(first == -1) {
        cout << "YES\n"; 
    }
    else if((last - first + 1) <= x) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

#undef int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--) solve();
}
