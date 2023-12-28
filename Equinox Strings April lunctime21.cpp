///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()

{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,a,b,s1=0,s2=0;

        cin>>n>>a>>b;

        for(ll i=0; i<n; i++)
        {
            string s;

            cin>>s;
            //EQUINOX
            if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X')
                s1+=a;

            else  s2+=b;
        }

        //cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;
        if(s1==s2) cout<<"DRAW\n";
        else if(s1>s2) cout<<"SARTHAK\n";
        else cout<<"ANURADHA\n";
    }

    return 0;
}
