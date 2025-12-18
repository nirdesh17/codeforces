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

    ll N=even.size();
    ll M=odd.size();

    if(N>0){
        sort(even.rbegin(),even.rend());
    }
    if(M>0){
        sort(odd.rbegin(),odd.rend());
    }

    if(M==0){
        for(ll i=0;i<n;i++){
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }

    if(N==0){
        for(ll i=0;i<n;i++){
            if(i%2==0){
                cout<<odd[0]<<" ";
            } else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
        return;
    }


    


    vector<ll> ans(n,0);
    ll sum=odd[0];
    ans[0]=sum;
    for(ll k=2;k<=N+1;k++){
        sum+=even[k-2];
        ans[k-1]=sum;
    }

    sum=ans[N];
    for(ll k=N+2;k<n;k++){
        ans[k-1]=sum-even[N-1];
        ans[k]=sum;
        k++;
    }

    if(M%2==0){
        ans[n-1]=0;
    } else{
        ans[n-1]=sum;
    }
    

    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // return;
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