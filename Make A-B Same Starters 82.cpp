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

        int n,i;
        cin>>n;

        int ar[n+2],br[n+2],pr[n+2],sf[n+2];

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }

        pr[0]=0;
        sf[n+1]=0;

        for(i=1; i<=n; i++)
        {
            cin>>br[i];

            pr[i]=pr[i-1]+ar[i];
        }

        for(i=n; i>=1; i--)
        {
            sf[i]=sf[i+1]+ar[i];
        }


        if(ar[1]!=br[1] and ar[n]!=br[n])
        {
            NO;
            continue;
        }


        bool f=true;
        for(i=2; i<n; i++)
        {

            //dbg(i);
            int val=ar[i];
            int val2=br[i];

            if(val==val2)
            {
                pr[i]=pr[i-1]+ar[i];
                continue;
            }
            else
            {

                if(val==0)
                {
                    if(pr[i-1]!=0 and sf[i+1]!=0)
                    {
                        ar[i]=1;
                        pr[i]+=ar[i];
                        continue;
                    }
                    else
                    {
                        // dbg("1st else");

                        f=false;
                        break;
                    }
                }
                else
                {

                    f=false;
                    break;

                }
            }
        }

        if(f) YES;
        else NO;

    }

    return 0;
}

