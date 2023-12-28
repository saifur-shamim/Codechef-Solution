///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,m,l,i,k;

        cin>>n>>m>>l;

        map<int,int> mp;
        int ar[l+2];

        for(i=0;i<m;i++)
        {
            cin>>k;

            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;

                mp[x]=i;
            }
        }

        for(i=0;i<l;i++)
        {
            cin>>ar[i];
        }

        int cnt=1;
        for(i=0;i<l-1;i++)
        {
            if(mp[ar[i]]!=mp[ar[i+1]])
            {
                cnt++;
            }
        }

        cout<<cnt<<nl;
    }
}
