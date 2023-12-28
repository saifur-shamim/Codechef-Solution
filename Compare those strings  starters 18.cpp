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
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

    int tc;

    cin>>tc;

    while(tc--)
    {
    	int n,i;
    	cin>>n;

    	string s1,s2;

    	cin>>s1>>s2;

        int ans=0;

    	for(i=0;i<n;i++)
    	{
    		int z=0;
    		for(int j=i;j<n;j++)
    		{
    			if(s1[j]<s2[j])
    			{
    				ans+=(j-i+1);
    				i=j;
    				break;
    			}
    			else if(s1[j]>s2[j])
    			{
    				i=j;
    				break;
    			}

    			if(j==n-1) z=1;
    		}

    		if(z) break;
    	}

    	

    	cout<<ans<<endl;
    }

}