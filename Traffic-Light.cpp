#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    char K;
    cin>>K;
    string s;
    cin>>s;
    int i=0,j=0;
    int sum=INT_MIN;
    // int cnt=0;
    s+=s;
    vector<ll> suff(n);
    int k=n-1;
    while(k<n*2)
    {
        if(s[k]=='g')
        {
            suff[n-1]=k;
            break;
        }
        k++;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]=='g')
        {
            suff[i]=i;
        }
        else
        {
            suff[i]=suff[i+1];
        }
    }
    while(i<n && j<n)
    {
        if(s[i]==K)
        {   
            int cnt=suff[i]-i;
            sum=max(sum,cnt);
        }
        i++;
    }
    cout<<sum<<endl;
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