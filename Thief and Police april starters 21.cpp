///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve()
{
    int n,m,x,y,a,b,thief,police;

    cin>>n>>m>>x>>y>>a>>b;

    thief=n-+m-y;
    police=max(n-a,m-b);

    if(thief>police) cout<<"NO\n";
    else cout<<"YES\n";
}
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        solve();
    }

    return 0;
}
