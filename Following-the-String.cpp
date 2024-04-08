#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> a(26,0);
    string s;
    for(int i = 0; i < n; i++) {
        int num = v[i];

        for(int j = 0; j < 26; j++) 
        {
            if(a[j] == num) 
            {
                a[j]++;
                s.push_back('a' + j);
                break;
            }

        }
    }

    cout<<s<<endl;
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