///Bismillahir Rahmanir Rahim
///Happy Coding


#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;

        cin>>n;

        vector <ll> v(n);

        for(i=0; i<n; i++)
        {
            cin>>v[i];

        }

        ll mx=*max_element(v.begin(),v.end());
        ll mn=*min_element(v.begin(),v.end());

        for(i=0; i<n; i++)
        {
            if(v[i]==mx)
            {
                v[i]=mn;
                break;
            }
        }

        ll ans=0;

        for(i=0; i<n; i++)
        {
            ans+=v[i]/mn;
        }

        cout<<ans<<nl;
    }

    return 0;
}
