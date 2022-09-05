
// Tanbir Ahmed   <<  RiBNAT  >>      //
// University of Barisal, Bangladesh  //
// https://cses.fi/problemset/task/2190/ 
 
 
#include<bits/stdc++.h>
using namespace std;

#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     in1(X)          scanf("%lli",&(X))
#define     ins(S)          scanf("%s",(S))
#define     out(X)          printf("%lli",(X))
#define     outs(S)         printf("%s",(S))
#define     Pnl             printf("\n")
#define     End             return 0
#define     ll              long long int
#define     Pair            pair<ll,ll>
#define     F               first
#define     S               second
#define     all(v)          v.begin(),v.end()
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     Max             1000000000000000014
#define     Min             -1000000000000000014
#define     mod             1000000007
#define     pb              push_back
#define     Vector          vector<ll>
#define     mp              make_pair
 



int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0; i<n; i++){
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    
    v.pb(v[0]);
    ll ans=0;
    for(ll i=1; i<v.size(); i++){
        ans+=v[i-1].F * v[i].S;
        ans-=v[i-1].S * v[i].F;
    }
    ans=abs(ans);
    cout<<ans<<endl;
}


