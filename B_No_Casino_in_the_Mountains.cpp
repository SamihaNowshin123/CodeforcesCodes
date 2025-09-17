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
    int n,k;
    cin>>n>>k;
    int flag=0;
    int count=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     
    for(int i=0;i<n;i++){
        if(a[i]==0){
            flag++;
            if(flag==k){
                count++;
                flag=0;
                i++;
            }
        }
        else if(a[i]==1){
            flag=0;
        }
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