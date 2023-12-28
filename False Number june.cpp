///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s[0]=='1')
        {
            cout<<"10";
            for(ll i=1;i<s.length();i++)
            {
                cout<<s[i];
            }

            cout<<endl;
        }

        else {
            cout<<"1"<<s<<endl;
        }
    }

    return 0;
}
