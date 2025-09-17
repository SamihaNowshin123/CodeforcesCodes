
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
    int a,s,n;
    cin>>a>>s>>n;
    vector<int>vx(n+1);
    int x;
    int max_t=0;
    for(int i=0;i<n;i++){
        cin>>x;
        vx.pb(x);
        max_t+=min(x,a-1);
        
    }
    max_t=max_t+s;
     cout<<max_t<<endl;
    
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