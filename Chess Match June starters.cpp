///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,a,b,ans;

        cin>>n>>a>>b;

        ans=2*(180+n);

        ans=ans-(a+b);

        cout<<ans<<endl;
    }

    return 0;
}
