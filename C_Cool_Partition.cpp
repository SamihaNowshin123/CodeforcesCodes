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
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    } 
    set<int>subarray;
    set<int>temp;
    int count=0;

    for(int i=0;i<x;i++){
        subarray.insert(v[i]);
        if(temp.count(v[i])){
            temp.erase(v[i]);
        }
        if(temp.size()==0){
            count++;
            temp=subarray;
        }
    }
    cout<<count<<endl;
    
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