#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
int main() {
    // your code goes here
    int a[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    sort(a,a+26);
    int i;
    for( i=0;i<26;i++){
        if(a[i]!=0){
            break;
        }
    }
    int count=0;
    if(a[i]==1){
        count++;
        i++;
    }
    for(int j=i+1;j<26;j++){
        if(a[j]!=a[i]){
            count++;
        }
        if(a[j]-a[i]>1){
            count++;
        }
    }
    if(count>1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}
