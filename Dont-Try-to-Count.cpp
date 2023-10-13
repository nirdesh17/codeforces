#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n,m;
    cin>>n>>m;
    string x,a;
    cin>>x;
    cin>>a;
    ll cnt=0;
    while(x.find(a)==string::npos && x.length()<=n*m)// at max loop can iterate only for 10 times
    {
        x+=x;
        cnt++;
    }
    if(x.find(a)==string::npos)
        cout<<-1<<endl;
    else
        cout<<cnt<<endl;
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