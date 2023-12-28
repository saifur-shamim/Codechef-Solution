///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int  tc;
    cin>>tc;

    while(tc--)
    {
        int e,k,ans=0;

        cin>>e>>k;

        while(e!=0)
        {
            ans++;
            e/=k;
        }

        cout<<ans<<nl;
    }
}
