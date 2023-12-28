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
        ll n,x,k,lt,rt;

        cin>>n>>x>>k;
        n++;
        if(x%k==0) cout<<"YES\n";
        else if((n-x)%k==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
