
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
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;

    for(char c : s){
        if(c == '1') count1++;
        else if(c == '0') count0++;
    }

    
    int left = (n - (2 * k)) / 2;
    
    
    if(count0 >= left && count1 >= left){
        if((count0 - left) % 2 == 0 && (count1 - left) % 2 == 0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;  
        }
    }          
    else {
        cout << "NO" << endl;
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