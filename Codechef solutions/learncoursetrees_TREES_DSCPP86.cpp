#include<iostream>
#include<cmath>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<set>
#include<stack>
#include<map>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bitset>
#include<utility>
#define pll pair<ll, ll>
#define ll long long
#define mod 1000000007
using namespace std;


int main ()
{
    ll t;
    cin>>t;
    ll n=t;
    set<ll> s1;
    set<ll> s2;
    ll c=0;
    t--;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        s1.insert(n);
        s2.insert(k);
    }
    for(ll i: s2)
    {
        for(ll j: s1)
        {
            if(i==j)
            {
                c++;
            }
        }
    }
    p(n-c-1)

    return 0;
}


