//https://codeforces.com/problemset/problem/1790/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

int main()
{
    NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n&1)
        {
            printf("-1\n");
        }
        else{
            ll x = n/2;
            ll xr = ((n+x)^(x));
            if(xr==n)
            printf("%lld %lld\n",n+x,x);
            else
            printf("-1\n");
        }
    }
    return 0;
}
