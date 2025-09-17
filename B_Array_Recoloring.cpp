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
    int n,k,x;
    cin>>n>>k;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
        }

    if(k==1){
        if (n==2){
            cout<<arr[0]+arr[1]<<endl;
        }
        else
     { int max1=0;
        int max2;
        int index;
        for(int i=1;i<arr.size()-1;i++){
            
            if(max1< arr[i]){
                max1=arr[i];
               
               
            }
        
        
        }
        
         int sum=arr[0]+arr[n-1];
        max2=max(arr[0],arr[n-1]);
        int max3= max1+max2;
        int ans=max(max3,sum);
        
        cout<<ans<<endl;
       }
    }
    
    else{
        int count=0;
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<k+1;i++){
             count=count+arr[i];
        }
        cout<<count<<endl;
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