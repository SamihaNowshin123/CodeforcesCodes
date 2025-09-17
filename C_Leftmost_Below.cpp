
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
    int n,j,f;
    f=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int y=a[0];
    for(int i=1;i<n;i++){
            j=a[i]/2+1;
            if(j>y){
                f=0;
                break;
            }
            else{
                y=min(y,a[i]);

            }
        }
        if(f==1){
            co("YES");
        }
        else{
            co("NO");
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