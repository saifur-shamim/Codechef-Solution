///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */

const ll    mod       = 1000000007;
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

ll power(ll base, ll pow,ll mod)
{
    ll ans=1;
    while(pow>0)
    {
        if(pow%2==1)  ans = (ans*base)%mod;
        base=(base*base)%mod;
        pow=pow/2;


    }

    return ans;
}

int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {

         int x,y;
         cin>>x>>y;

    }

    ll b=1LL*(n*10);
    ll a=1;


    ll x=power(b,mod-2,mod); // x=b^-1;

    ll ans=(a*x)%mod;
    cout<<ans<<endl;
    return 0;
}

