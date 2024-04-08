#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d)
        cout<<-1<<endl;
    else
    {
        if((a+d-b)<c)
            cout<<-1<<endl;
        else
        {
            cout<<(2*(d-b)+a-c)<<endl;
        }
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