///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int a,b;
    cin>>a>>b;

    if((a-b)%3==0)
    {
        cout<<((a-b)/3)+b<<nl;
    }
    else
    {
      float dif=(float) a-b;
      cout<<(dif/3)+b<<nl;
    }
}
