#include<bits/stdc++.h>
#include<math.h>

#define    str     string
#define    sz      size()
#define    bgn      begin()
#define    ll      long long int
#define    li      long int
#define    con     continue
#define    rt      return 0
#define    fr      first
#define    sec     second
#define    pf      push_front
#define    pb      push_back
#define    vb      vct.begin()
#define    ve      vct.end()
#define    vs      vct.size()
#define    db      dq.begin()
#define    de      dq.end()
#define    ds      dq.size()
#define    ib      it.begin()
#define    ie      it.end()
#define    itf     it->first
#define    its     it->second
#define    lb      lst.begin()
#define    le      lst.end()
#define    mb      mp.begin()
#define    me      mp.end()
#define    stb     st.begin()
#define    ste     st.end()
#define    sb      s.begin()
#define    se      s.end()
#define    NL      printf("\n")
#define   yes       printf("YES\n")
#define   no        printf("NO\n")
#define   forone    for(i=1;i<=n;i++)
#define   forzero   for(i=0;i<n;i++)
#define   sortone   sort(ara+1,ara+n+1)
#define   sortzero  sort(ara,ara+n)
#define   get(ara)  forone cin>>ara[i]
#define tc int tc;scanf("%d",&tc);while(tc--)
ll ara[100001];
using namespace std;

int main( )
{

    tc
    {
        ll i,j,k,y,n,x,m,a,b,ans=0,sum=0,cnt=0;
        ll c,mx=0,mn=INT_MAX,mod=1e9+7;
        str s;
        bool chk=true;
        cin>>s;
        x=s.size();
        if(x==3) chk=false;
        else if(s[0]!='<' or s[1]!='/' or s[x-1]!='>') chk=false;
        for(i=2; i<x-1; i++)
        {
            if(s[i]>='a' and s[i]<='z') con;
            else if (s[i]>='0' and s[i]<='9') con;
            chk=false;
        }
        if(chk==true) cout<<"Success";
        else cout<<"Error  ";
        NL;
    }
    return 0;
}
