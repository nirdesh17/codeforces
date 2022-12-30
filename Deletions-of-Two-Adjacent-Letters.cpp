#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        char c;
        cin>>s;
        cin>>c;
        vector<ll> a;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                a.push_back(i);
            }
        }
        
            bool yes=false;
            for(ll i=0;i<a.size();i++)
            {
                if(a[i]%2==0)
                {
                    yes=true;
                    break;
                }
            }
            if(!yes)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        
    }
    return 0;
}