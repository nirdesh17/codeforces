#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,b,sum=0,maxi=INT_MIN,par=0;
    cin>>n;
    cin>>b;
    sum=b;
    par=abs(b)%2;
    maxi=sum;
    for(int i=1;i<n;i++)
    {
        cin>>b;
        if(abs(b)%2!=par)
        {
            sum+=b;
        }
        else
        {
            sum=b;
        }

        if(b>sum)
        {
            sum=b;
        }

        par=abs(b)%2;
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
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