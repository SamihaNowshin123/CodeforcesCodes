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
    int n ,k,count ;
    cin>>n>>k;
    count=0;
  
     if(n%2==0)
    {        if(k%2==0)
          {
            count  += n/k ;
            if(n%k!=0)
              count++;
          }

          if(k%2==1)
          {
            count  += n/  ( k-1) ; 
            if(n% (k-1) !=0)
              count++;
          }

}
     if(n%2==1){
        if(k%2==0){
            n=n-(k-1);
            count++;
            count  +=(n/k);
            if(n%k!=0)
              count++;
        }
        else{
            n=n-k;
            count++;
            count+=( n/(k-1));
             if(n% (k-1) !=0)
              count++;


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