///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll mn(ll a, ll b)
{
    if(a<b)
    {
        return a;
    }

    else
    {
        return b;
    }
}

int main()
{
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif // ONLINE_JUDGE

    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,m,k;
        cin>>n>>m>>k;

        double ar[n+1][m+1];

        for(i=0; i<=n; i++)
        {
            for(j=0; j<=m; j++)
            {
                if(i==0|| j==0)
                    ar[i][j]=0;
                else
                    cin>>ar[i][j];
            }
        }



        for(i=0; i<=n; i++)
        {
            double prev=0;
            for(j=0; j<=m; j++)
            {
                ar[i][j]+=prev;
                prev=ar[i][j];
            }
        }

        for(i=0; i<=m; i++)
        {
            double prev=0;
            for(j=0; j<=n; j++)
            {
                ar[j][i]+=prev;
                prev=ar[j][i];
            }
        }

        ll ans=0;
        ll m_min=mn(m,n);

        for(ll u=1; u<=m_min; u++)
        {
            for(i=u; i<=n; i++)
            {

                for(j=u; j<=m; j++)
                {
                    if((ar[i][j]+ar[i-u][j-u]-ar[i][j-u]-ar[i-u][j])/(u*u)>=k)
                    {
                        ans++;
                    }

                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
