
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
    int arr[n];
    int flag=0;
    int max= 0;
    for(int i=0;i<n;i++){
         cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
        else{
           flag=1;
           break;
        }
       
   }
    if(flag==0){
        cout<<"YES"<<endl;

    }
    else{
        if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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