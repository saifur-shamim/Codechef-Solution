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

      ll n,k,i;
      cin>>n>>k;

      ll ar[n+2];

      map<ll,vector<ll>>mp;
      map<ll,vector<ll>> :: iterator it;

      for(i=0;i<n;i++)
      {
          cin>>ar[i];
      }

      map<ll,bool>mp1;
      for(i=0;i<n;i++)
      {
          ll b;
          cin>>b;

          mp[ar[i]].PB(b);
          mp1[ar[i]]=true;
      }

      if(sz(mp)<k)
      {
          cout<<"-1\n";
          continue;
      }


      vector<ll> v;

      for(auto it1 :mp1)
      {

         sort(all(mp[it1.F]));

         v.PB(mp[it1.F][0]);
      }

      sort(all(v));

      ll sum=0;

      for(i=0;i<k;i++)
      {
          sum+=v[i];
      }

      cout<<sum<<endl;
    }
    return 0;
}

