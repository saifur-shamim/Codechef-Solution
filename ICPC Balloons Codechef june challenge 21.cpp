///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i,a[20],ans=0;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        vector<ll> vc;

        for(i=0; i<n; i++)
        {
            if(a[i]<=7)
            {
                vc.push_back(a[i]);
            }

            if(vc.size()==7)
            {
                ans=i+1;
                break;

            }
        }

        cout<<ans<<endl;
        vc.clear();
    }
}
