///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int x,y;
        cin>>x>>y;


        int mn=min(x,y);
        int mx=max(x,y);
        int ans=0;

        if(__gcd(mn,mx)!=1)
        {
            ans=0;
        }
        else
        {
            int nev=0;

            if(mx%2==0) nev++;
            if(mn%2==0) nev++;

            if(nev==1)
            {
                ans=1;
            }
            else
            {
                if(__gcd(x+1,y)!=1 || __gcd(x,y+1)!=1)
                {
                    ans=1;
                }
                else
                {
                    ans=2;
                }
            }
        }

        cout<<ans<<nl;
    }
}
