#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    // when we choose element a[i] to erase then all element a[j] in array become a[j]=a[j]-a[i]
    // so when we change all elements means the difference between any 2 element will always 
    // be same so our goal is just to find 2 element whose difference is k

    sort(a.begin(),a.end());
    int i=0,j=1;//if we start j=n-1 there could be possiblilty we lost some pair were i and j are closer
    while(i<n && j<n)
    {
        if(i != j && a[j]-a[i]==k)
        {
            cout<<"YES"<<endl;
            return;
        }
        else if(a[j]-a[i]<k)
            j++;
        else
            i++;
    }
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