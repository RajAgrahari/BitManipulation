//https://www.codechef.com/problems/CS2023_PON
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,b;
	    cin>>n>>b;
	    vector<ll> ans;
	    for(ll i=0;i<n;i++)
	    {
	        ll x;
	        cin>>x;
	        if((x&b) == b)
	        ans.push_back(x);
	    }
	    if(ans.size() == 0)
	    {
	        cout<<"NO\n";
	        continue;
	    }
	    ll x = ans[0];
	    for(ll i=1;i<ans.size();i++)
	    {
	        x &= ans[i];
	    }
	    if(x==b)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
