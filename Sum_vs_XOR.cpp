#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
int main() {
    // your code goes here
    ll t;
    cin>>t;
    int c=0;
    for(int i=0;i<62;i++){
        if((t&(1LL<<i))){
            c++;
        }
        // cout<<c<<endl;
    }
    int j=0;
    while(t>0){
        t=(t>>1);
        j++;
    }
    ll ans=pow(2,j-c);
    cout<<ans;
    return 0;
}
