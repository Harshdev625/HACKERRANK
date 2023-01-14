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
        ll n;
        cin>>n;
        ll ans=0,count=0;
        ll m=n;
        while(m>1){
            m=(m>>1LL);
            count++;
        }
        for(int i=0;i<count;i++){
            if((n&(1LL<<i))==0){
                ll temp=pow(2,i);
                ans+=temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
