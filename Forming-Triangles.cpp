
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]=pow(2,v[i]);
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=n-1;i>=2;i--)
    {
        int j=i-1,k=0;
        while(k<j)
        {
            if(v[k]+v[j]>v[i])
            {
                cnt+=(j-k);
                j--;
            }
            else
                k++;
        }
    }
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

