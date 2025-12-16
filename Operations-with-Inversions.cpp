#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T mx(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T mn(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll ans=0;
    for(ll i=n-2;i>=0;i--){
        for(ll j=i+1;j<n;j++){
            if(arr[j]>0 && arr[i]>arr[j]){
                ans++;
                arr[j]=-1;
            }
        }
    }
    cout<<ans<<endl;
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