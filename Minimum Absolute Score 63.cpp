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
const int mx=1e5+30;

ll dp[mx];
ll n;
string s1,s2;
map<char ,ll>mp;

ll solve(ll i,ll v1)
{
    if(i>=n) return 0;

    if(dp[i]!=infll) return dp[i];

    //cout<<" i = "<<i<<endl;
    ll ret1=0,ret2=0;

    ret1=solve(i+1,(v1+((mp[s2[i]]-mp[s1[i]])+26)%26));

    ret2=solve(i+1,(v1-((mp[s2[i]]-mp[s1[i]])+26)%26));

    cout<<" i = "<<i<<" "<<min(abs(ret1),abs(ret2))<<endl;
    return dp[i]=min(abs(ret1),abs(ret2));
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

    char ch='a';

    for(ll i=1; i<=26; i++)
    {

        mp[ch]=i;

        //cout<<ch<<" "<<i<<endl;
        ch++;
    }
    while(tc--)
    {
        ll i;
        cin>>n;

        for(i=0;i<=n;i++)
        {
            dp[i]=infll;
        }
        cin>>s1>>s2;


        cout<<"s1= "<<s1<<endl;
        ll ans=solve(0,0);
        cout<<ans<<endl;
        cout<<dp[n-1]<<endl;
        //s1.clear();
        // s2.clear();
    }
    return 0;
}
