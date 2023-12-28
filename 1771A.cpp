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

       ll ar[n+2];

       for(i=0;i<n;i++)
       {
           cin>>ar[i];
       }

       sort(ar,ar+n);

       ll ans=0;


       ll cnt1=1,cnt2=0;

       i=1;

       while(ar[i]==ar[i-1] and i<n)
       {
           cnt1++;
           i++;
       }

       cnt2=1;

       i=n-2;

       while(ar[i]==ar[i+1] and i>=0)
       {
           cnt2++;
           i--;
       }

       //cout<<"cnt1 = "<<cnt1<<"\ncnt2 = "<<cnt2<<endl;

       if(n==2)
       {
           ans=2;
       }
       else if(ar[0]==ar[n-1])
       {
           ans=cnt1*(cnt1-1);
       }
       else
       {
           ans=cnt1*(2*cnt2);
       }


       cout<<ans<<endl;
    }
    return 0;
}
