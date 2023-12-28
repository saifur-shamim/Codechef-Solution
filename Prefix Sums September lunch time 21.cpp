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

int main()
{
    faster;
    int tc;

    cin>>tc;

    while(tc--)
    {
        int n;
        cin>>n;



        if(n%4!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            vi v1,v2;



            int x=1;
            int cnt=0;
            int check=n/2;
            int y=n;

            while(check)
            {

                if(cnt==0)
                {
                    v1.PB(x);
                    x++;
                    cnt=1;
                }
                else
                {
                    v1.PB(y);
                    y--;
                    cnt=0;
                }
                check--;
            }

            check=n/2;
            while(check)
            {

                v2.PB(x);
                x++;
                check--;
            }

            sort(all(v1));
            sort(all(v2));
            cout<<"YES\n";
            for(auto it:v1)
            {
                cout<<it<<" ";
            }
            cout<<endl;

            for(auto it:v2)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
