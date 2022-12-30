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
        cin>>s;
        vector<ll> a;
        for(ll i=0;i<s.length();i++)
        {
            a.push_back((int)s[i]);
        }
        sort(a.begin(),a.end());
        bool yes=true;
        for(ll i=0;i<a.size()-1;i++)
        {
            if(a[i+1]-a[i]==1)
            yes=true;
            else{
                yes=false;
                break;
            }
        }
        if(yes)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}