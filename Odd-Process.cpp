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

    vector<ll> even;
    vector<ll> odd;

    for(ll i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        } else{
            odd.push_back(arr[i]);
        }
    }

    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());

    vector<ll> arr1;
    ll i=0;
    ll j=0;
    ll N=even.size();
    ll M=odd.size();
    while(i<M && j<N){
        arr1.push_back(odd[i++]);
        arr1.push_back(even[j++]);
    }

    while(i<M){
        arr1.push_back(odd[i++]);
    }
    while(j<N){
        arr1.push_back(even[j++]);
    }

    ll sum=0;
    vector<ll> ans;
    for(ll i=0;i<n;i++){
        sum+=arr1[i];
        if(sum%2==0){
            sum=0;
        }
        ans.push_back(sum);
    }

    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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