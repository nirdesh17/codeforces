#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T min(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    // string s;
    // getline(cin, s);
    // string ans="";
    // ans=ans+s[0];
    // for(int i=1;i<s.length();i++)
    // {
    //     if(s[i-1]==' ')
    //     {
    //         ans=ans+s[i];
    //     }
    // }
    // cout<<ans<<endl;
    string a,b,c;
    cin>>a>>b>>c;
    cout<<a[0]<<b[0]<<c[0]<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    // cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}