
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
    int n,x;
    cin>>n>>x;
    int max=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(max<=arr[0]){
        max=arr[0];
    }
    for(int i=0;i<n-1;i++){
        if(max<(arr[i+1]-arr[i])){
            max=arr[i+1]-arr[i];
        }
    }
    if(max<(2*(x-arr[n-1])))
    max=(2*(x-arr[n-1]));
    cout<<max<<endl;
    
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