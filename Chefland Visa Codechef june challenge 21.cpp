///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int


int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll x1,x2,y1,y2,z1,z2;

        cin>>x1>>x2>>y1>>y2>>z1>>z2;

        if(x2>=x1 && y2>=y1 && z1>=z2)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }
    }

    return  0;
}
