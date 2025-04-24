#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    ll i=0,j=n-1;
    ll mn=1,mx=n;
    while(i<j) 
    {
        
        if(a[i]!=mn && a[i]!=mx && a[j]!=mn && a[j]!=mx)
        {
            break;
        }
        if(a[i]==mn)
        {
            i++;
            mn++;
        }
        else if(a[i]==mx)
        {
            i++;
            mx--;
        }

        if(a[j]==mn)
        {
            j--;
            mn++;
        }
        else if(a[j]==mx)
        {
            j--;
            mx--;
        }
    }
    if(j-i<3)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<i+1<<" "<<j+1<<endl;
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