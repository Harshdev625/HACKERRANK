#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define INF 1e9
int main()
{
    // your code goes here
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    if (b == a)
    {
        for (int i = 0, j = a.size() - 1; j > i && k > 0; j--, i++)
        {
            if (a[i] < '9')
            {
                if (k >= 2)
                {
                    a[i] = '9';
                    a[j] = '9';
                }
                else
                {
                    break;
                }
                k -= 2;
            }
        }
        if (k >= 1 && a.size() % 2 == 1)
        {
            if (a[a.size() / 2] != '9')
            {
                k--;
                a[a.size() / 2] = '9';
            }
        }
        cout << a;
    }
    else
    {
        int count = 0;
        int i, j;
        for (i = 0, j = a.size() - 1; j > i; j--, i++)
        {
            if (a[i] != a[j])
            {
                count++;
                if (a[i] - '0' > a[j] - '0')
                {
                    a[j] = a[i];
                }
                else if(a[j]-'0' > a[i] - '0')
                {
                    a[i] = a[j];
                }
            }
        }
        if (count > k)
        {
            cout << -1;
        }
        else if(count == k){
            cout<<a;
        }
        else
        {
            for (int i = 0, j = a.size() - 1; j > i && k > 0; j--, i++)
            {
                if (a[i] < '9')
                {
                    if (k >= 2)
                    {
                        a[i] = '9';
                        a[j] = '9';
                    }
                    else
                    {
                        break;
                    }
                    k -= 2;
                }
            }
            if (k >= 1 && a.size() % 2 == 1)
            {
                if (a[a.size() / 2] != '9')
                {
                    k--;
                    a[a.size() / 2] = '9';
                }
            }
            cout << a;
        }
    }
    return 0;
}
