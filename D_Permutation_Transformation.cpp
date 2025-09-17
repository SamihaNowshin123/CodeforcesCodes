#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll>vx;
vector<ll>ans;
void Divide_Conquere(ll i,ll j,ll depth)
{   
    ll max=INT_MIN;
    ll index=-1;
    if(i>j){
        return;
    }
    
    auto it=max_element(vx.begin()+i,vx.begin()+j+1);
      index = it - vx.begin();
 
         Divide_Conquere(i,index-1,depth+1);

         cout<<depth<<" ";

         Divide_Conquere(index+1,j,depth+1);
 
    }
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vx.resize(n);
        ans.resize(n);
 
        for(int i=0;i<n;i++){
            cin>>vx[i];
        }
        Divide_Conquere(0,n-1,0);

        cout<<endl;
 
       
 
    }
}