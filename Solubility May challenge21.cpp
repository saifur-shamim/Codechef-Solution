///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll x,a,b,ans;

        cin>>x>>a>>b;

        ans=(a+(100-x)*b)*10;

        cout<<ans<<endl;
    }

    return 0;
}
