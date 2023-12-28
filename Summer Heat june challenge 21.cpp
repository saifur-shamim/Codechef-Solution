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
        ll x1,x2,x3,x4;
        cin>>x1>>x2>>x3>>x4;

        cout<<(x3/x1)+(x4/x2)<<endl;
    }

    return 0;
}
