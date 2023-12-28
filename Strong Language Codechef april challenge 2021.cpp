///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;


    while(t--)
    {
        ll n,k,i,cnt=0,flag=0;
        string s;
        cin>>n>>k;
        cin>>s;

        for(i=0; i<n; i++)
        {
            if(s[i]=='*' )
            {
                cnt++;
                if(cnt==k)
                {
                    flag=1;
                    break;
                }
            }

            else
            {
                cnt=0;
            }
        }

        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}
