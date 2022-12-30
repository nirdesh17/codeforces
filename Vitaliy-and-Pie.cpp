#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> b;
    ll counter=n-1;
    for(ll i=0;i<2*(n-1);i+=2)
    {
        if(s[i]-32==s[i+1])
        counter--;
        else
        {
            bool yes=false;
            b.push_back(s[i]);
            if(b.size()>0)
            {
                for(ll j=0;j<b.size();j++)
                {
                    if(b[j]-32==s[i+1])
                    {counter--;
                    b[j]='.';
                    yes=true;
                    break;}
                }
                // if(!yes)
                // counter++;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}