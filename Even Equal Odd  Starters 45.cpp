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
        ll n,i;
        cin>>n;

        ll siz=2*n;
        ll ar[siz+2];

        ll ev=0,od=0;
        vi v;
        for(i=0;i<2*n;i++)
        {
            cin>>ar[i];

            if(ar[i]%2) od++;
            else
            {
                ev++;
                ll cnt=0;
                while(ar[i]%2==0)
                {
                   cnt++;
                   ar[i]/=2;
                }

                v.PB(cnt);
            }
        }

        if(ev==od)
        {
            cout<<"0\n";
        }
        else if(od>ev)
        {
            cout<<od-n<<endl;
        }
        else
        {

           sort(all(v));
         /* for(auto it:v)
           {
               cout<<it<<" ";
           }
           cout<<endl; */
           ll ans=0;
           i=0;
          // cout<<" od = "<<od<<" ev = "<<ev<<endl;
           while(od<ev)
           {
               ans+=v[i];
               i++;
               od++;
               ev--;
           }

           cout<<ans<<endl;
        }
    }
    return 0;
}
