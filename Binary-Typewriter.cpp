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
    int cnt=0;
    if(s[0]=='1')
        cnt++;
    
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
            cnt++;
    }
    int ans=s.length()+cnt;
    if(cnt==1 || cnt==0)
    {
        cout<<ans<<endl;
    }
    else if(cnt==2)
    {
        cout<<ans-1<<endl;
    }
    else
    {
        cout<<ans-2<<endl;
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