///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        float k1,k2,k3,v,res,val=9.575;

        cin>>k1>>k2>>k3>>v;

        res=100.00/(k1*k2*k3*v);

        if(res>=val)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }

    return 0;
}
