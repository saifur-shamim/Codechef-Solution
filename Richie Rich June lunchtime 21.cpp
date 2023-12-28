///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll a,b,x;
        cin>>a>>b>>x;

        if((b-a)%x==0)
        {
            cout<<(b-a)/x<<endl;
        }
        else
        {
            cout<<((b-a)/x)+1<<endl;

        }
    }
}
