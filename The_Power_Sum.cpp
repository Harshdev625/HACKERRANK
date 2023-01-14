#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
int helper(int sum,int n,int i,int f){
        if(sum==0){
        return 1;
        }
        else if(sum<0){
            return 0;
        }
        if(i>f){
            return 0;
        }
    int count=0;
    count+=helper(sum-pow(i,n),n,i+1,f);
    count+=helper(sum,n,i+1,f);
    return count;
}
int count(int sum,int n){
    return helper(sum,n,1,100);
}
int main() {
    // your code goes here
    int sum,n;
    cin>>sum>>n;
    cout<<count(sum,n);
    return 0;
}
