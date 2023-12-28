///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

int main()
{
   int tc;
   cin>>tc;

   while(tc--)
   {
       ll n,m,i;
       cin>>n>>m;

       vector<pair<ll,ll> > v;

       for(i=0;i<m;i++)
       {
           ll x,y;
           cin>>x>>y;
           v.pb({x,y});
       }

       sort(v.begin(),v.end(),greater<pair<ll,ll>>());

       ll ans=0,k=1,n1=n;

       for(i=0;i<m && n>0;i++)
       {
           ll first=v[i].first;
           ll second=v[i].second;

           k=(k*second)/__gcd(k,second);//where k==LCM

           ans+=first*(n-n1/k);
           n=n1/k;

       }

       cout<<ans<<nl;
   }
}
