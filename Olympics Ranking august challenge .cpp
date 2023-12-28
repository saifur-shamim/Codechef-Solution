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
        int g1,g2,b1,b2,s1,s2,sum1=0,sum2=0;

        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        sum1=g1+s1+b1;
        sum2=g2+s2+b2;

        if(sum1>sum2)
        {
            cout<<1<<nl;
        }
        else
        {
            cout<<2<<nl;
        }
    }
}
