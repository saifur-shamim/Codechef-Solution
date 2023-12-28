///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) x*x
int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll c,g,ans;

        cin>>g>>c;



        ans=sq(c)/(2*g);
        cout<<ans<<nl;
    }

    return 0;
}
