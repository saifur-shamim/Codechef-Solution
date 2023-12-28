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
const int x=1e5+4;

vi v[x];
int vis[x];
int c;
int dfs(int node)
{
    vis[node]=1;


    for(auto child :v[node])
    {
        if(vis[child]==0)
        {
            c++;
            dfs(child);
        }
    }



    return c;
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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,i;
        cin>>n>>m;
        ll ans=1,cnt=0;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            v[a].PB(b);
            v[b].PB(a);
        }

        for(i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                c=1;
                ll res=dfs(i)%mod;
                ans*=res;
                ans=ans%mod;
            }
        }

        cout<<cnt<<" "<<ans<<endl;
        for(i=1;i<=n;i++)
        {
            v[i].clear();
            vis[i]=0;
        }
    }

    return 0;
}
