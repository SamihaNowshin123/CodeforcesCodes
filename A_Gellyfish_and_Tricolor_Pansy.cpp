

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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int fa= min(a,c);
    int fb=min(b,d);
     if(fa>fb || fa==fb){
             cout<<"Gellyfish"<<endl;
     }
     else
     cout<<"Flower"<<endl;
    
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