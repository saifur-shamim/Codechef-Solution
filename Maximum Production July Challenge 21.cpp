///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll d,x,y,z,first,second;

        cin>>d>>x>>y>>z;

        first=x*7;
        second=(y*d) + (7-d)*z;
        cout<<max(first,second)<<nl;
    }
}
