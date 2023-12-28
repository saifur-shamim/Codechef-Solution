///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main()
{
    ll n,q;
    cin>>n>>q;

    ll roots[n],i;

    for(i=0; i<n; i++)
    {
        cin>>roots[i];
    }

    sort(roots,roots+n);
    for(i=0; i<q; i++)
    {
        ll x;
        cin>>x;

        ll upper=upper_bound(roots,roots+n,x)-roots;

        //cout<<upper<<endl;

        if(roots[upper-1]==x)
        {
            cout<<"0\n";
        }
        else if((n-upper)%2==0)
        {
            cout<<"POSITIVE\n";
        }
        else
        {
            cout<<"NEGATIVE\n";
        }
    }

    return 0;
}
