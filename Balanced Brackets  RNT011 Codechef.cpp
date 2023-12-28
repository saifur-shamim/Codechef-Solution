
///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isbalanced(char a,char b)
{
    return ( (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;

        stack <char> st;
        bool done=1;
        for(auto u:s)
        {
            if(u=='(' || u=='{' || u=='[')
            {
                st.push(u);
            }

            else
            {
                if(st.empty())
                {
                    done=0;
                    break;
                }

                else
                {

                    if(isbalanced(st.top(),u))
                    {
                        st.pop();
                    }

                    else
                    {
                        done=0;
                        break;
                    }
                }
            }
        }

        if(!st.empty()) done=0;

        if(done==0) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}
