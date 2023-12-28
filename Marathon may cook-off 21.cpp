///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

   ll t;
   cin>>t;

   while(t--)
   {
       ll day,dis,a,b,c;
       cin>>day>>dis>>a>>b>>c;

       ll res=day*dis;

       if(res>=42) cout<<c<<endl;
       else if(res>=21) cout<<b<<endl;
       else if(res>=10) cout<<a<<endl;
       else cout<<"0\n";
   }

   return 0;
}
