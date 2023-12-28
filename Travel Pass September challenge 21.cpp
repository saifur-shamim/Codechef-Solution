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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;

        int cnt1=0,cnt2=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') cnt1++;
            else cnt2++;
        }

        cout<<(cnt1*a)+(cnt2*b)<<endl;
    }
}
