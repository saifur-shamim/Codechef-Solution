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

      ll  n,i;
      cin>>n;

      string s;

      cin>>s;

      string s1=s;

      ll len=2*n;

      sort(all(s1));
      if(n==1 and s[0]==s[1] or s1[0]==s1[len-1])
      {
          cout<<"-1\n";
      }
      else if(n==1)
      {
          cout<<"1 \n";
      }
      else
      {
          vl v1,v2;

          for(i=0;i<len;i++)
          {
              if(s[i]=='0')
              {
                  v1.PB(i+1);
              }
              else
              {
                  v2.PB(i+1);
              }
          }

          i=0;
          while(sz(v1)<n and i<sz(v2))
          {
              v1.PB(v2[i]);
              i++;
          }

          sort(all(v1));


          ll cnt=0;
          for(i=0;i<sz(v1) and cnt<n ;i++)
          {
              cout<<v1[i]<<" ";
              cnt++;
          }

          cout<<endl;
      }
    }
    return 0;
}

