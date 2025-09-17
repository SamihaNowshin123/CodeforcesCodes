#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dfs(ll src,vector<ll>&vis,vector<ll>G[],ll &flag){
    vis[src]=1;
    flag++;
    for(auto x:G[src]){
        if(!vis[x]){
            dfs(x,vis,G,flag);
        }
    }
}

int main(){
    ll v,e;
    cin>>v>>e;
    vector<ll>G[v];
    for(int i=0;i<e;i++){
        ll x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);   
    }
    vector<ll>ans;
    vector<ll>vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            ll flag=0;
            dfs(i,vis,G,flag);
            ans.push_back(flag);
        }
    }
    ll val=(v*(v-1))/2;
    for(int i=0;i<ans.size();i++){
        ll x=(ans[i]*(ans[i]-1))/2;
        val=val-x;
    }
    cout<<val<<endl;
}
