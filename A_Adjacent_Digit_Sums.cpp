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
    int x,y;
    cin>>x>>y;
    
    if((y-x)==1 || (x-y)>0  && ( (x+1)-y)%9==0) {
        co("Yes");
    }
    else
     co("No");

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