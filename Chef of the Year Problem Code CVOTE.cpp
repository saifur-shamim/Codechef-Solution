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

int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    int n,m,i;
    cin>>n>>m;
    map<string,int> mp1;
    map<string, string> mp2;
    //vector<string> v;
    map<string ,int> mp3;

    for(i=0; i<n; i++)
    {
        string nam,d;
        cin>>nam>>d;
        mp2[nam]=d;
    }

    int countryvotes=0,chef=0;
    for(i=0; i<m; i++)
    {
        string s;
        cin>>s;

        mp1[s]++;
        mp3[mp2[s]]++;
        chef=max(chef,mp1[s]);
        countryvotes=max(countryvotes,mp3[mp2[s]]);
    }

    for(auto it:mp3)
    {
        if(it.S==countryvotes)
        {
            cout<<it.F<<endl;
            break;
        }
    }

    for(auto it:mp1)
    {
        if(it.S==chef)
        {
            cout<<it.F<<endl;
            break;
        }
    }

/*
    int mx=0;

    for(auto it:mp3)
    {
        mx=max(mx,it.S);
    }

    for(auto it:mp3)
    {
        if(mx==it.S)
        {
            cout<<it.F<<endl;
            break;
        }
    }

    mx=0;

    for(auto it:mp1)
    {
        mx=max(mx,it.S);
    }

    for(auto it:mp1)
    {
        if(mx==it.S)
        {
            cout<<it.F<<endl;
            break;
        }
    }

    */


    return 0;

}
