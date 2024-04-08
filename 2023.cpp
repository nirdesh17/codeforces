#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,b;
    cin>>n>>b;
    ll a[n];
    bool check=true;
    ll sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum*=a[i];
    }
    if(2023%sum==0)
    {
        cout << "YES" << endl;
        for(int i = 0; i < b - 1; i++) {
            cout << 1 << " ";
        }
        cout << 2023 / sum << endl;

    }
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