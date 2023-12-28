///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,x,i;
        cin>>n>>x;

        vector <ll> v(n);

        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll sz=unique(v.begin(),v.end())-v.begin();

        ll due=n-x;

        if(due<sz)
            cout<<due<<endl;
        else
            cout<<sz<<endl;


       v.clear();
    }

    return 0;
}
