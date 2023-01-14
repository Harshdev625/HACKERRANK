#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if((r-l)%2==1){
            ll ans=0;
            for(ll i=r;i>=l;i-=2){
                ans=(ans^i);
            }
            cout<<ans<<endl;
        }
        else{
            ll ans=0;
            for(ll i=r;i>=l;i-=2){
                ans=(ans^i);
            }
            ll c=l,k=0;
            while(c>1){
            c=(c>>1);
            k++;
            }
            c=(1<<k);
            c--;
            for(ll j=c+1;j<=l-1;j++){
                ans=(ans^j);
            }
            if(c==1){
                ans=(ans^1);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
