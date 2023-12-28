
///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define mod 1000000007

int main()
{
    int tc;

    cin>>tc;

    while(tc--)
    {
        map<int, int> mp;

        for(int i=0;i<4;i++)
        {
            int x;
            cin>>x;

            mp[x]++;
        }

        int cnt=0;

        for(auto it:mp)
        {
            cnt++;
        }
       if(cnt==4) cout<<2<<nl;
       else if(cnt==3) cout<<2<<nl;
       else if(cnt==2)
       {
           auto it=mp.begin();

           int x=it->second;

           it++;

           int y=it->second;

           if(x==y)
           {
               cout<<2<<nl;
           }
           else{
            cout<<1<<nl;
           }
       }
       else cout<<0<<nl;
    }
}
