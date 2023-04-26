//https://codeforces.com/problemset/problem/1801/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);

int main()
{
    ll a[256][256];
       ll x=0;
       for(ll i=0;i<256;i+=2)
       {
           for(ll j=0;j<256;j+=2)
           {
              a[i][j] = x;
              a[i+1][j+1] = x+3;
              a[i][j+1] = x+1;
              a[i+1][j] = x+2;
              x += 4;
           }
       }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
       cin>>n>>m; 
       cout<<n*m<<'\n';
       for(ll i=0;i<n;i++)
       {
           for(ll j=0;j<m;j++)
           {
              cout<<a[i][j]<<' ';
           }
           cout<<'\n';
       }
    }
    return 0;
}
