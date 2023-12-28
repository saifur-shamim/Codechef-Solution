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
        int n,m,i;
        cin>>n>>m;

        int ar[n+2];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        sort(ar,ar+n);

        int sum;

        int res=INT_MIN;
        int cnt=2;

        for(i=n-2; i>=0 and cnt>0 ; i--)
        {
            int ans,rem=ar[n-1]-ar[i];

            if(rem>m)
            {
                ans=(((rem/m)+1)*m)-rem;
            }
            else if(rem==0) ans=0;
            else
            {
                ans=m-rem;
            }

            sum=ar[n-1]+ar[i];

            //pf("i = %d  rem = %d  ans = %d \n",i,rem,ans);

            sum=max(sum+ans,sum+(rem%m));

            res=max(res,sum);


        }



        cout<<res<<endl;



    }
    return 0;
}
