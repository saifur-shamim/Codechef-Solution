///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int
#define rt return 0

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,x,i,space,rating;
        cin>>n>>x;
        vector<ll> v;

        for(i=0;i<n;i++)
        {
            cin>>space>>rating;

            if(space<=x)
            {
                v.push_back(rating);
            }
        }

        sort(v.begin(),v.end());

        ll l=v.size();

        cout<<v[l-1]<<endl;

        v.clear();
    }

    rt;
}
