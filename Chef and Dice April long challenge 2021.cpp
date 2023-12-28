///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,sum,rem;
        cin>>n;

        sum=(n/4)*44;
        rem=n%4;

        if(n>=4)
        {
            if(rem==0)
            {
                sum+=16;
            }
            else if(rem==1)
            {
                sum+=32;
            }
            else if(rem==2)
            {
                sum+=44;
            }
            else
            {
                sum+=55;
            }
        }

        else
        {
            if(rem==1)
            {
                sum=20;
            }
            else if(rem==2)
            {
                sum=36;
            }
            else
            {
                sum=51;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
