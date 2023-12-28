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

    //faster;
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

        string s;
        cin>>s;


        ll tm=n-k;
        tm++;
        ll j;
        set<ll>st;
        set<ll> :: iterator it;

        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                st.insert(i+1);
            }


        }

        //cout<<"size of set "<<sz(st)<<endl;

        while(sz(st)>0 and tm>0)
        {
            it=st.begin();
            i=*it;
            cout<<"set = ";
            for(auto it1:st)
            {
                cout<<it1<<" ";
            }

            cout<<endl;
            ll j;

            j=i+k-1;
            if(j<n)
            {

                ll k1=0;
                for(; k1<k and it!=st.end(); k1++)
                {
                    cout<<" it = "<<*it<<" \n i+k1 = "<<i+k1<<endl;
                    if(*it==(i+k1))
                    {
                        cout<<"if\n";
                        ll val=*it;
                        it++;
                        st.erase(s.find(val));
                    }
                    else
                    {
                        ll val=*it;
                        it++;
                        st.erase(s.find(val));

                        st.insert(i+k1);

                    }
                }
                tm--;
            }
        }

        map<ll,ll>mp;

        for(auto it:st)
        {
            cout<<it<<" ";
            mp[(it)-1]=1;
        }

        cout<<endl;
        for(i=0; i<n; i++)
        {
            if(mp[i])
            {
                cout<<"1";
            }
            else cout<<"0";
        }

        cout<<endl;
    }
    return 0;
}
