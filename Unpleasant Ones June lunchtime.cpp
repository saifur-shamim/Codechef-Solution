#include<bits/stdc++.h>
#include<math.h>

#define    str     string
#define    sz      size()

#define    ll      long long int


#define    rt      return 0


#define    pf      push_front
#define    pb      push_back


#define    NL      printf("\n")
#define   yes       printf("YES\n")
#define   no        printf("NO\n")
#define   forone    for(i=1;i<=n;i++)
#define   forzero   for(i=0;i<n;i++)

#define   get(ara)  forone cin>>ara[i]

#define tc int tc;scanf("%d",&tc);while(tc--)
ll ar[1005];
using namespace std;

int main( )
{
    tc
    {

        ll n,i;
        cin>>n;

        vector<ll> odd,even;

        forzero
        {
            cin>>ar[i];
            if(ar[i]%2==0)
            {
                even.pb(ar[i]);
            }
            else
            {
                odd.pb(ar[i]);
            }
        }

        for(i=0; i<even.sz; i++)
        {
            cout<<even[i]<<" ";
        }
        for(i=0; i<odd.sz; i++)
        {
            cout<<odd[i]<<" ";
        }

        NL;
    }

    return 0;
}
