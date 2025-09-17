
#include<bits/stdc++.h>
using namespace std;

#define f  first 
#define s  second 
#define int long long
#define pb push_back
#define mp make_pair
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";

void solve(){
     int x, t;
      cin >> x;
        int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

        for (int j = 0; j < x; j++) {
            string str;
            cin >> t >> str;

            if (str == "10") {
                if (t < min1) min1 = t;
            } else if (str == "01") {
                if (t < min2) min2 = t;
            } else if (str == "11") {
                if (t < min3) min3 = t;
            }
        }

        if (min3 <= min1 + min2 && min3 != INT_MAX) {
            cout << min3 << endl;
        } else if (min3 > min1 + min2) {
            if (min1 != INT_MAX && min2 != INT_MAX) {
                cout << min1 + min2 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }

  
    

#undef int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
    
}

