///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll l,i;
        string s;
        cin>>l>>s;

        bool f=false;
        int cnt=0,div;
        for(i=0; i<l; i++)
        {
            if(i==0 && s[i]=='1')
            {
                f=true;
                break;
            }

            else
            {
                if(s[i]=='1')
                {
                    cnt++;
                }

                div=(cnt*100)/(i+1);

                if(div>=50)
                {
                    f=true;
                    break;
                }
            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
