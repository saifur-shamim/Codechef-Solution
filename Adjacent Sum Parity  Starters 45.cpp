///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;
typedef  long int li;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     PB        push_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{

    faster;
 /*
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
*/
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i;
        cin>>n;

        int ar[n+2];
        int one=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            one+=ar[i];
        }


        if(one==0)
        {
            YES;
        }
        else
        {
            vi v1,v2;

            if(ar[0]==1)
            {
                v1.PB(1);
                v1.PB(0);
                v2.PB(0);
                v2.PB(1);
            }
            else
            {

                v1.PB(0);
                v1.PB(0);
                v2.PB(0);
                v2.PB(0);
            }

            for(i=1;i<n-1;i++)
            {
                if(ar[i]==1)
                {
                     int l1,l2;

                    l1=v1.back();
                    l2=v2.back();

                    if(l1==0)
                    {
                        v1.PB(1);
                    }
                    else
                    {
                        v1.PB(0);
                    }
                     if(l2==0)
                    {
                        v2.PB(1);
                    }
                    else
                    {
                        v2.PB(0);
                    }
                }
                else
                {
                    int l1,l2;

                    l1=v1.back();
                    l2=v2.back();

                    if(l1==0)
                    {
                        v1.PB(0);
                    }
                    else
                    {
                        v1.PB(1);
                    }
                     if(l2==0)
                    {
                        v2.PB(0);
                    }
                    else
                    {
                        v2.PB(1);
                    }
                }
            }

            if((v1[0]+v1.back())%2==ar[n-1]%2 or (v2[0]+v2.back())%2==ar[n-1]%2)
            {
                YES;
            }
            else
            {
                NO;
            }
        }
    }
    return 0;
}
