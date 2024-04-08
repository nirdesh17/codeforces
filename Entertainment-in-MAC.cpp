#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll i=0;
    ll j=s.length()-1;
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;j--;
        }
        else
        {
            break;
        }
    }
    if(s[i]>s[j])
    {
        string a=s;
        reverse(a.begin(),a.end());
        cout<<a+s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}