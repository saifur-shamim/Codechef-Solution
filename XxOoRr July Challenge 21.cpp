///Bismillahir Rahmanir Rahim

///Happy Coding
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll n,k,i;

    cin>>n>>k;

    ll ar[n];

    for(i=0; i<n; i++)
    {
        cin>>ar[i];

    }


    ll ans=0;
    for(i=0; i<32; i++)
    {
        ll cnt=0;
        for(ll j=0; j<n; j++)
        {
            if(ar[j]!=0)
            {
                if(ar[j]&1==1)
                {
                    cnt++;
                }

                ar[j]=ar[j]/2;
            }
        }
        ans=ans + ((cnt+k-1)/k);
    }

    cout<<ans<<nl;
}
int main()
{
    faster;
    ll tc;

    cin>>tc;

    while(tc--)
    {
        solve();
    }
}
