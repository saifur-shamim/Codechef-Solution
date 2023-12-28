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
const ll infll=900000000000000000;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string rev = "";
    for (int i = 0; i <sz(s); ++i)
    {
        rev+= ((58-s[i])%10+48);
    }
    ll total = 0;
    ll prev = (rev[0] - 48)%10;
    total += prev;
    vl v;

    for(int i = 1; i < sz(rev); i++)
    {
        v.PB(total);
        if(k < 0)
        {
            break;
        }
        ll curr = ((rev[i] - 48))%10;
        if(curr > prev)
        {
            total += 10;
        }
        prev = curr;
    }
    v.PB(total);

    ll ans=0;
    for(auto a: v)
    {
        if(a > k)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;

}
int main()
{
    faster;
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }

    return 0;
}
