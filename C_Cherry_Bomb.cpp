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
    vector<int>a(n);
    vector<int>b(n);
    int x;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==-1){
            count++;
        }
    }
    if(count==n){
        int mx=a[0]; 
        int mn=a[0];
        for(int i=1;i<n;i++){
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        
        cout<<(mn+k+1)-mx<<endl;
    }
    else{
        int sum=0;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                sum=a[i]+b[i];
                break;
            }
        }
        int flag1=0;
        int flag2=0;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if((a[i]+b[i])!=sum){
                flag1=1;
                break;
               }
            }
        }
        int req;
        for(int i=0;i<n;i++){
            req=sum-a[i];
            if(req<0 || req>k){
                flag2=1;
                break;
            }
             
        }
        if(flag1==1 || flag2==1){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
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