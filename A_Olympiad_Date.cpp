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
    int n;
    cin>>n;
    int x;
    int count=0;
    int count0=0;    
    int count1=0;
    int count2=0;
    int count3=0;
    int count5=0;
    int flag=0;
    vector<int>vx;
    for(int i=0;i<n;i++){
        cin>>x;
        vx.pb(x);
    }
    for(int i=0;i<n;i++){    
        if(vx[i]==0)
        count0++;
        if(vx[i]==1)
        count1++;
        if(vx[i]==2)
        count2++;
        if(vx[i]==3)
        count3++;
        if(vx[i]==5)
        count5++;
        if(count0>=3 && count2>=2 && count1>=1 && count3>=1 && count5>=1 ){
            flag=1;
            count++;
            break;

        }
        else
        count++;
        


    }
    if(flag==1){
        co(count);
    }
    else
    cout<<"0"<<endl;
    
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