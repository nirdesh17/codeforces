#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll x,n;
    cin>>x>>n;
    if(n%4==0)
    {
        cout<<x<<endl;
        return;
    }
    if(x%2!=0)
    {
        if(n%4==1)
        {
            cout<<x+n<<endl;
        }
        else if((n%4==2))
        {
            cout<<x-1<<endl;
        }
        else if(n%4==3)
        {
            cout<<x-1-n<<endl;
        }
    }
    else
    {
        if(n%4==1)
        {
            cout<<x-n<<endl;
        }
        else if(n%4==2)
        {
            cout<<x+1<<endl;
        }
        else if(n%4==3)
        {
            cout<<x+1+n<<endl;
        }
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