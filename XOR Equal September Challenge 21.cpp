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
typedef vector<pii> vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define ss second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pf printf
#define mod 1000000007


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
        int n,i,x;
        cin>>n>>x;

        int ar[n+2];
        map<int,int> mp;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }

        int ans=0,cnt=0;

        if(x==0)
        {
            for(auto it:mp)
            {
                ans=min(ans,it.second);
            }
            cout<<ans<<" 0\n";
        }
        else
        {
            for(auto it=mp.begin();it!=mp.end();it++)
            {
               int k=(it->F ^ x);

                if(mp.find(k)!=mp.end())
                {
                    auto tmp=mp.find(k);

                    if((it->ss+tmp->ss)>ans)
                    {
                        ans=it->ss+tmp->ss;
                        cnt=it->ss;
                    }
                    else if(it->ss+tmp->ss==ans)
                    {
                        cnt=min(cnt,it->ss);
                    }
                }

                if(it->ss>ans)
                {
                    ans=it->ss;
                    cnt=0;
                }
                else if(it->ss==ans)
                {
                    cnt=0;
                }
            }
            cout<<ans<<" "<<cnt<<endl;
        }


    }

    return 0;
}
