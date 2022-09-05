
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
 


ll area(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    ll ans=(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1);
    if(ans>0) return 1;
    else if(ans<0) return 2;
    else return 0;
}


ll chk(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    if(min(x1,x2)<=x3 and max(x1,x2)>=x3 and min(y1,y2)<=y3 and max(y1,y2)>=y3){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x1, x2, x3, x4, y1, y2, y3, y4, ok=0;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(area(x1,y1,x2,y2,x3,y3)!=area(x1,y1,x2,y2,x4,y4) and area(x3,y3,x4,y4,x1,y1)!=area(x3,y3,x4,y4,x2,y2)){
            ok=1;
        }
        else if(area(x1,y1,x2,y2,x3,y3)==area(x1,y1,x2,y2,x4,y4) and area(x1,y1,x2,y2,x4,y4)==0 and area(x3,y3,x4,y4,x1,y1)==area(x3,y3,x4,y4,x2,y2) and area(x3,y3,x4,y4,x2,y2)==0){
            if(chk(x1,y1,x2,y2,x3,y3) or chk(x1,y1,x2,y2,x4,y4)){
                ok=1;
            }else if(chk(x3,y3,x4,y4,x1,y1) or chk(x3,y3,x4,y4,x2,y2)){
                ok=1;
            }
        }

        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}


