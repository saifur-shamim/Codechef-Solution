///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,r,i,a[50005],b[50005];
        cin>>n>>r;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        ll ans=0,res=0;

        for(i=0; i<n; i++)
        {
            ans+=b[i];
            res=max(res,ans);

            if(i!=n-1)
                ans-=r*(a[i+1]-a[i]);
            if(ans<0)
                ans=0;
        }

        cout<<res<<endl;
    }

    return 0;
}
