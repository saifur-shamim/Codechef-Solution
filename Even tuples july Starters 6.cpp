///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back


int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,q,l,r,i,j;
        cin>>n>>q;

        ll ar[n+2];
        ar[0]=0;
        for(i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                ar[i]=ar[i-1] + 1;
            }
            else
            {
                ar[i]=ar[i-1];
            }
        }

        for(i=0; i<q; i++)
        {
            cin>>l>>r;

            ll even=ar[r]-ar[l-1];
            ll odd=(r-l+1)-even;

            ll ev=(even*(even-1)*(even-2))/6;
            ll od=((odd*(odd-1))/2) * even;

            cout<<ev+od<<nl;
        }

    }
}
