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
#define     mod       1000000007
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

        map<ll,ll>mp;

        ll mx=0;

        ll sum=0;

        for(i=1; i<=n; i++)
        {
            ll a;
            cin>>a;

            sum+=a;
            mp[a]++;

            mx=max(a,mx);
        }

        ll ase=mp[mx];

        if(n==1)
        {
            cout<<"Marichka\n";
        }
        else if(n==sum)
        {
            if(n%2)
            {
                cout<<"Marichka\n";
            }
            else
            {
                cout<<"Zenyk\n";
            }
        }
        else
        {

            if(mp[mx]%2)
            {
                cout<<"Marichka\n";
            }
            else if((n-mp[mx])%2)
            {
                cout<<"Marichka\n";
            }
            else
            {
                cout<<"Zenyk\n";
            }
        }
    }
    return 0;
}

