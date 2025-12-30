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
    ll a=n;
    cout<<pow(2,n)-1<<" ";
   while(a>0){
        ll num=pow(2,a)-1;
        ll num1=pow(2,a-1)-1;
        // cout<<"nums "<<num<<" nums1 "<<num1<<endl;
        // cout<<num<<" ";
        for(ll i=num1;i<num;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
       a--;
   }

   for(ll i=0;i<pow(2,n)-1;i++){
       if(i%2==0){
           cout<<i<<" ";
       }
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