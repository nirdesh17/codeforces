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

bool allOnes(string s){
    for(ll i=0;i<s.length();i++){
        if(s[i]=='0')
            return false;
    }
    return true;
}
void update(string& s){
    ll n=s.length();
    string t=s;
    for(ll i=n-1;i>0;i--){
        if(s[i-1]=='1'){
            s[i]='1';
        }
    }
    if(t[n-1]=='1'){
        s[0]='1';
    }
}
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll ans=0;
    s+=s;
    
    for(ll i=0;i<2*n-1;i++){
        if(s[i]=='1'){
            ll cnt=0;
            for(ll j=i+1;j<2*n;j++){
                if(s[j]=='0'){
                    cnt++;
                } else{
                    break;
                }
            }
            ans=mx(ans,cnt);
        }
    }
    // while(true){
    //     if(allOnes(s)){
    //         break;
    //     }

    //     update(s);
    //     ans++;
    // }
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