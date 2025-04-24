#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
   ll n,b;
   cin>>n>>b;
   ll ans=0;
    ll a=n-1;
   if (a % 4 == 0) 
    ans=a;  
   else if (a % 4 == 1) 
    ans=1; 
   else if (a % 4 == 2) 
    ans=a + 1; 
   else
    ans= 0;

   ll cnt=n;
   if(ans==b)
   {
        cout<<cnt<<endl;
        return;
   }
   ll check=ans^b;
   if(n!=check)
   {
    cout<<cnt+1<<endl;
   }
   else
   {
    cout<<cnt+2<<endl;
   }
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