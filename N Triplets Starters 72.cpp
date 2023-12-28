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

int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1}; //8 direction

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

bool isprime(int n)
{
    if(n<2) return false;
    else if(n<=3) return true;
    else if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0) return false;
    }

    return true;
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

        int n,i;
        cin>>n;

        if(n<6 or isprime(n))
        {
            cout<<"-1\n";
            continue;
        }

        bool f=false;
        for(i=2; i*i<=n and f==false; i++)
        {
            if(n%i==0 and i!=n/i)
            {
               cout<<1<<" "<<i<<" "<<n/i<<endl;
               f=true;
               break;
            }
        }

        if(f==false)
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
