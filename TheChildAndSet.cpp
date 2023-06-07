//https://codeforces.com/contest/437/problem/B
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
        ll n,limit;
        cin>>n>>limit;
        vector<pair<ll,ll>> vp;
        for(ll i=1;i<=limit;i++)
        {
            if(i&1)
            vp.push_back({1,i});
            else
            {
                for(ll j=1;j<30;j++)
                {
                    if(i&(1<<j))
                    {
                        ll x = (1<<j);
                        vp.push_back({x,i});
                        break;
                    }
                }
            }
        }
        sort(vp.rbegin(),vp.rend());
        
        vector<ll> ans;
        for(ll i=0;i<vp.size();i++)
        {
            if(vp[i].first <= n)
           { 
            ans.push_back(vp[i].second);
            n -= vp[i].first;
           }
        }
        if(n>0)
        cout<<"-1\n";
        else{
            ll temp = ans.size();
           cout<<temp<<'\n';
            for(ll x:ans)
            cout<<x<<' ';   
            cout<<'\n'; 
        }
    return 0;
}
