//https://codeforces.com/contest/1682/problem/B
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
        ll a[n];
        ll ans=-1;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]; 
            if(a[i]!=i)
            {
                if(ans==-1)
                ans = (a[i]&i);
                else
                ans &= (a[i]&i);
            }
            
        }
        cout<<ans<<'\n';

    }
    return 0;
}
