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

ll get_invs(string &s)
{
	ll invs=0,ones=0;

	for(char c:s)
	{
		if(c=='1') ones++;
		else invs+=ones;
	}

	return invs;
}

bool cmp(string &s1,string &s2)
{
	return count(begin(s1),end(s1),'1')<count(begin(s2),end(s2),'1');
}
int main()
{	
	
	faster;

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

	int tc;
	cin>>tc;

	while(tc--)
	{
		ll n,m;
		cin>>n>>m;

		vector<string> a(n);

		for(string &s : a) cin>>s;
		sort(begin(a),end(a),cmp);

	   string newstr;

	   for(string &s: a) newstr+=s;

	   	cout<<get_invs(newstr)<<endl;
	}

}