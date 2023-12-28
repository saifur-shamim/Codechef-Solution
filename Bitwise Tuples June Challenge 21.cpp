///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define M 1000000007

ll exponent(ll a, ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2==1) ans=(ans*a)%M;
        a=(a*a)%M;
        b=b/2;
    }

    return ans;
}
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;

        cin>>n>>m;

        ll sq=exponent(2,n)-1;
        ll ans=exponent(sq,m);

        cout<<ans<<endl;
    }

    return 0;
}
