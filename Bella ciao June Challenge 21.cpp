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
        ll D,d,p,q,i,j,div,ans=0;

        cin>>D>>d>>p>>q;

        div=D/d;



        if(div%2==0)
        {
            ans+=d*((div/2)*(2*p+(div-1)*q));
        }
        else
        {
            ans+=d*(div *(p + ((div-1)/2)*q));
        }

        ans+=(D%d)*(p+(div)*q);

        cout<<ans<<endl;
    }

    return 0;
}
