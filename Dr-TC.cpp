#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T min(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;

    vector<string> v;
    for(int i=1;i<=n;i++)
    {
        string a=s;
        a[i-1]=a[i-1]=='1'?'0':'1';
        v.push_back(a);
    }
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]=='1')
                cnt++;
        }
    }
    cout<<cnt<<endl;
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