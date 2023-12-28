///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=9000000000000000000;

ll solve()
{
    ll l,r;
    cin>>l>>r;

    for(int i=0;i<3;i++)
    {
        if(l>r)
            return 0;
        if(l<=r && l%3==0)
        {
            break;
        }
        else
        {
            l++;
        }
    }

    for(int i=0;i<3;i++)
    {
        if(l<=r && r%3==0)
        {
            break;
        }
        else{r--;}
    }

    ll a=l/3;
    ll b=r/3;
    return abs(a-b)+1;
}
int main()
{
    faster;
    int tc;
    cin>>tc;

    while(tc--)
    {

        cout<<solve()<<endl;
    }
}
