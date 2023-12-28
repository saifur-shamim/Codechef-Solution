///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mx INT_MAX
int sz = 100005;

int main()
{
    optimize();

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m,i,j,a[sz],b[sz];
        cin>>n>>m;

        map<ll,ll>mp;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }

        int MAX=1e9;

        for(i=0; i<n; i++)
        {
            if(i==0) mp[i]=0;
            else if(a[i]!=0)  mp[i]=0;
            else mp[i]=MAX;
        }

        int right=-1;

        for(i=0; i<n; i++)
        {
            if(a[i]==1) right=i;
            if(right!=-1)
            {
                if(a[i]==0)
                {
                    mp[i]=min(mp[i],i-right);
                }
            }
        }

        int left=-1;

        for(i=n-1; i>=0; i--)
        {
            if(a[i]==2)
            {
                left=i;
            }

            if(left!=-1)
            {
                if(a[i]==0)
                {
                    mp[i]=min(mp[i],left-i);
                }
            }
        }

        for(i=0; i<m; i++)
        {
            j=b[i]-1;

            if(mp[j]!=MAX) cout<<mp[j]<<" ";
            else cout<<"-1 ";
        }
        cout<<endl;
    }

    return 0;
}
