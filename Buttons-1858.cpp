#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    a=a+(c/2)+(c%2);
    b=b+(c/2);
    if(a>b)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
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