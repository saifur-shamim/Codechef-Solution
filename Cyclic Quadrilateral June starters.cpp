///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long int
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll a,b,c,d;

        cin>>a>>b>>c>>d;

        if(a+c==180 && b+d==180)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
