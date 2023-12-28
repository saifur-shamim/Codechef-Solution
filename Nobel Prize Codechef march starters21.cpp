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
        ll n,m,a,i;

        cin>>n>>m;
        set<ll> st;
        for(i=0; i<n; i++)
        {
            cin>>a;

            st.insert(a);
        }

        if(st.size()==m)
        {
            cout<<"NO\n";
        }

        else
        {
            cout<<"YES\n";
        }
    }
}
