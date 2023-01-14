#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
string tostring(long long n){
    string s;
    while(n!=0){
        int t=n%10;
        if(t==0){
            s.push_back('0');
        }
        else if(t==1){
            s.push_back('1');
        }
        else if(t==2){
            s.push_back('2');
        }
        else if(t==3){
            s.push_back('3');
        }
        else if(t==4){
            s.push_back('4');
        }
        else if(t==5){
            s.push_back('5');
        }
        else if(t==6){
            s.push_back('6');
        }
        else if(t==7){
            s.push_back('7');
        }
        else if(t==8){
            s.push_back('8');
        }
        else{
            s.push_back('9');
        }
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
} 
long long add(string s){
    long long sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    return sum;
}
int main() {
    // your code goes here
    string s;
    int k;
    cin>>s>>k;
    long long sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    sum*=k;
    while(sum>10){
        string s1=tostring(sum);
        sum=add(s1);
    }
    cout<<sum;
}
