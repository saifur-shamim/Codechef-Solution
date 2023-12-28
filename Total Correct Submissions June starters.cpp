///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    ll tc;

    cin>>tc;

    while(tc--)
    {
        ll n,c,i;

        cin>>n;

        string s;
        map <string, ll> mp;

        for(i=1; i<=3*n; i++)
        {
            cin>>s>>c;

            mp[s]+=c;
        }


        vector<ll> v;

        for(auto it: mp)
        {
            v.push_back(it.second);
        }

        sort(v.begin(),v.end());

        for(auto it: v)
        {
          cout<<it<<" ";
        }
        cout<<endl;

    }

    return 0;
}
