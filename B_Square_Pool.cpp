
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
    
    int n,s;
		cin>>n>>s; 
		int dx,dy,x,y;
        int num=0;
		for(int i=0;i<n;i++){
			cin>>dx>>dy>>x>>y;
			if(x+y==s&&x==y){
				num++;
			}
			else if(x+y==s){
				if(dx==1&&dy==-1) 
                num++;
				if(dx==-1&&dy==1)
                 num++;
			}
            
            else if(x==y){
				if(dx==dy) num++;
			}
		}
		co(num);
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