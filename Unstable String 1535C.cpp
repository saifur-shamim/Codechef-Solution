///Bismillahir Rahmanir Rahim
///Happy Coding

/*

     * * * *             *              *  * * * * * *   *            *   * * * * *
    *                   * *             *  *             *            *   *         *
    *                  *   *            *  *             *            *   *          *
    *                 *     *           *  *             *            *   *           *
    *                *       *          *  *             *            *   *           *
     *              *         *         *  * * * * * *   *            *   *          *
       *           *           *        *  *             *            *   * * * * * *
         *        *             *       *  *             *            *   *  *
          *      * * * * * * * * *      *  *             *            *   *    *
           *    *                 *     *  *             *            *   *      *
           *   *                   *    *  *             *            *   *        *
           *  *                     *   *  *              *          *    *          *
    * * * *  *                       *  *  *                * * * * *     *            *


*/


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

#define     pb        push_back
#define     dlt       pop_back
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
#define     nn        cout<<endl
#define     negone    cout<<"-1\n"

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

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
    //tc=1;


    while(tc--)
    {


        ll n,i;

        string s;
        cin>>s;

        n=sz(s);

        ll ar[n+1] = {0};

        ll cnt=0,z=0;


        for(i=0; i<n; i++)
        {
            z=0;
            if(s[i]=='?')
            {
                while(i<n and s[i]=='?')
                {
                    cnt++;
                    z++;
                    i++;
                }

                ar[i]=z;
            }
        }

        if(cnt==n)
        {
            cout<<1LL*((n*(n+1))/2);
            nn;
            continue;
        }

        ll ans=0;

        for(i=0; i<n; i++)
        {
            if(s[i]=='?') ans++;
            else break;
        }

       ans=(ans*(ans+1))/2;

        for(i=0; i<n; i++)
        {

            if(s[i]=='1' or s[i]=='0')
            {
                ll y=ar[i];
                ll x=y+1;
                char ch=s[i];
                i++;

                while(i<n)
                {
                    if(s[i]=='?')
                    {
                        x++;

                        if(ch=='0') ch='1';
                        else ch='0';
                    }
                    else
                    {
                        if(ch!=s[i])
                        {
                            x++;
                            ch=s[i];
                        }
                        else break;
                    }

                    i++;
                }

                ans+=(x*(x+1))/2 -(y*(y+1))/2;

                i--;
            }
        }

        cout<<ans;
        nn;


    }

    return 0;
}


