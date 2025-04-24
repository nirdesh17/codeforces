#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;

    if(b-a==c-b) 
    {
        cout<<"YES"<<endl;
        return ;
    }
    if((a+c)%(2*b)==0) 
    {
        cout<<"YES"<<endl;
        return ;
    }
    if((2*b-a)>0)
    {
        if(((2*b-a)%c)==0) 
        {
        cout<<"YES"<<endl;
        return ;
        }
    }
    if((2*b-c)>0)
    {
        if(((2*b-c)%a)==0) 
        {
        cout<<"YES"<<endl;
        return ;
        }
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