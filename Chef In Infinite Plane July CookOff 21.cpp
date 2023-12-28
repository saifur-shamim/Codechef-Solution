///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
int main()
{
    faster();
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;
        ll ar[n+2];
        map<ll,ll>mp;



        for(i=0; i<n; i++)
        {
            cin>>ar[i];

        }

        ll cnt=0;
        for(i=0; i<n; i++)
        {
            if(mp.find(ar[i])==mp.end())
            {
                mp[ar[i]]++;
                cnt++;
            }
            else
            {
                if(mp[ar[i]]<ar[i]-1)
                {
                    cnt++;
                    mp[ar[i]]++;

                }
            }

        }
         cout<<cnt<<nl;
    }
}
