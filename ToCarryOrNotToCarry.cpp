//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1410
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

    ll a,b;
    while(cin>>a>>b)
    {
         ll a_ = ~(a);
        ll b_ = ~(b);
        ll sum = (a&b_)+(b&a_);
        cout<<sum<<endl;
    }
    return 0;
}
