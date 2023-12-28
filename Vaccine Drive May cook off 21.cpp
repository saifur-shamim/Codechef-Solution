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
        ll g,p,a[12],i,sum=0;
        cin>>g>>p;


        for(i=1; i<11; i++)
        {
            cin>>a[i];

        }

        ll mx,mn,ans=0;

        for(i=10;i>g;i--)
        {
            sum+=a[i];
        }

        sum++;

        if(sum%p==0)
        {
            mn=sum/p;
        }
        else{

            mn=sum/p;
            mn++;
        }

        sum+=a[g]-1;

        if(sum%p==0)
        {
            mx=sum/p;
        }
        else{

            mx=sum/p;
            mx++;
        }
        cout<<mn<<" "<<mx<<endl;
    }

    return 0;
}
