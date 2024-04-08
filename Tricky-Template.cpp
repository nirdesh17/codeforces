#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(string a,string b,string c)
{
    ll n=a.size();
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c[i] or b[i]==c[i])
            cnt++;            
    }
    return cnt==n;
}
void solve() {
    ll n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;

    if(!check(a,b,c))
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;
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