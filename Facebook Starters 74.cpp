
#include<bits/stdc++.h>

using namespace std;


int main()
{


    int tc;
    cin>>tc;

    while(tc--)
    {

      int n,i;
      cin>>n;

      map<pair<int,int> , int>mp;

      vector<pair<int,int>> v;

      int ar[n+2],br[n+2];
      for(i=1;i<=n;i++)
      {
          cin>>ar[i];
      }

      for(i=1;i<=n;i++)
      {
          cin>>br[i];

          v.push_back({ar[i],br[i]});
          mp[{ar[i],br[i]}]=i;
      }

      sort(v.begin(),v.end());

      int a=v[n-1].first;
      int b=v[n-1].second;

      cout<<mp[{a,b}]<<endl;
    }
    return 0;
}
