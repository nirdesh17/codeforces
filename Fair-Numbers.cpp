#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    ll all=2520;//lcm of first 9 number(i.e 1 to 9) if number n is divisble 
    // by all then its called super fair hence the require number will be 
    //between n to super fair then we can do brute force

    ll a=n;
    while(a%all!=0)
    {
        a++;
    }
    for(ll i=n;i<=a;i++)
    {
        string b=to_string(i);
        bool flag=true;
        for(ll j=0;j<b.size();j++)
        {
            if(b[j]!='0' && i%(b[j]-'0')!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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