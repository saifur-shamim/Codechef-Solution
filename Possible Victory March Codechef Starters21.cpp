///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll r,o,c,ro,pr;

    cin>>r>>o>>c;

    ro=20-o;
    pr=ro*6*6;

    if(pr+c>r) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;

}
