///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'

int main()
{
    int tc;

    cin>>tc;

    while(tc--)
    {
        ll n,p,k,i;
        cin>>n>>p>>k;

        ll ans,y,x;

        y=(n-1)-((n-1)/k)*(k);
        x=p%k;

         //cout<<"y = "<<y<<nl;
        // cout<<"x = "<<x<<nl;
        if(x>y)
        {
            ans=((n-1)/k)*x +(y+1);
        }
        else
        {
            ans=(((n-1)/k)+1)*x;
        }

        //cout<<"ans = "<<ans<<nl;
        for(i=x; i<=n-1; i+=k)
        {
            ans++;

            if(i==p)
            {
                cout<<ans<<nl;
                break;
            }
        }
    }

    return 0;
}
