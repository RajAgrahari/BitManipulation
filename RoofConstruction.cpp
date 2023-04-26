//https://codeforces.com/problemset/problem/1632/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

int main()
{
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==2)
        {
            cout<<1<<' '<<0<<'\n';
            continue;
        }
        ll x = log2(n-1);
        x = pow(2,x);
        for(ll i=x-1;i>=0;i--)
        cout<<i<<' ';
        for(ll i=x;i<n;i++)
        cout<<i<<' ';
        cout<<'\n';
    }
    return 0;
}
