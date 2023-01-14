#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
const long long N=1e7+2;
ll a[N];
int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;
    int c,b,k;
    for(int i=0;i<m;i++){
        cin>>c>>b>>k;
        a[c]+=k;
        a[b+1]-=k;
    }
    ll max=0;
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}
