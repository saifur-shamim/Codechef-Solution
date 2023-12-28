///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x,y,xr,yr,d,mn,xt,yt;

        cin>>x>>y>>xr>>yr>>d;

        xt=x/xr;
        yt=y/yr;

        mn=min(xt,yt);

        if(mn>=d) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
