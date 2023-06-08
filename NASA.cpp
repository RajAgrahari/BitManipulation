//https://www.codechef.com/problems/PALIXOR
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalin(string s)
{
    ll i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}

int main() 
{
	ll t;
	cin>>t;
    set<ll> mp;
	for(ll i=0;i<10;i++)
	mp.insert(i);
	for(ll i=11;i<=35000;i++)
	{
	    string temp = to_string(i);
	    if(isPalin(temp))
	    {
	        mp.insert(i);
	    }
	}
// 	cout<<mp.size()<<'\n';
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    vector<ll> mp1(35001);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mp1[a[i]]++;
	    }
	    ll ans=0;
	    for(ll i=0;i<n;i++)
	    {
	        for(auto it:mp)
	        {
	            ll x = (a[i]^it);
	            if(x<35000 && mp1[x]>0)
	            {
	               if(a[i] == x)
	                ans += mp1[x]-1;
	               else
	               ans += mp1[x];
	            }
	        }
	    }
	    cout<<((ans/2)+n)<<'\n';
	    
	}
	return 0;
}
