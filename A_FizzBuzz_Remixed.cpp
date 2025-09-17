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
    int count=0;
      int x;
      cin>>x;
      if(x%15==0){
        count=(x/15)*3+1;
      }
      else if(x%15==1){
        count=(x/15)*3+2;
      }
      else{
        count=(x/15)*3+3;
      }
      co(count);
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