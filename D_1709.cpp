#include <bits/stdc++.h>
using namespace std;

#define f first 
#define s second 
#define int long long
#define pb push_back
#define mp make_pair
#define co(x) cout << x << "\n";
#define ct(x) cout << x << " ";

void solve() {
    int size;
    cin >> size;
    
    vector<int> arrA(size), arrB(size);
    for (int &val : arrA) cin >> val;
    for (int &val : arrB) cin >> val;

    vector<pair<int, int>> operations;

    // Sort arrA with operation type 1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arrA[j] > arrA[j + 1]) {
                swap(arrA[j], arrA[j + 1]);
                operations.pb({1, j + 1});
            }
        }
    }

    // Sort arrB with operation type 2
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arrB[j] > arrB[j + 1]) {
                swap(arrB[j], arrB[j + 1]);
                operations.pb({2, j + 1});
            }
        }
    }

    // Ensure arrA[i] ≤ arrB[i] with operation type 3
    for (int i = 0; i < size; i++) {
        if (arrA[i] > arrB[i]) {
            swap(arrA[i], arrB[i]);
            operations.pb({3, i + 1});
        }
    }

    co(operations.size());
    for (auto &op : operations) {
        ct(op.f); co(op.s);
    }
}

#undef int

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
