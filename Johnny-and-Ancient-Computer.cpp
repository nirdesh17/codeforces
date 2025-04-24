#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    if(m<n)
        swap(m,n);
    
    ll cnt=0;
    while(n<=m)
    {
        if(m==n)
        {
            cout<<cnt<<endl;
            return;
        }
        if(n*8<=m)
        {
            n*=8;
        }
        else if(n*4<=m)
        {
            n*=4;
        }
        else if(n*2<=m)
        {
            n*=2;
        }
        else 
        {
            break;
        }
        cnt++;
    }
    cout<<-1<<endl;
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