///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n'
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=9000000000000000000;
int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;

        int mn=min(a,min(b,c));

        if(mn>d || mn>e)
        {
            cout<<"NO\n";
        }
        else
        {
            if((a+b<=d && c<=e) || (a+c<=d && b<=e) || (b+c<=d && a<=e))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
