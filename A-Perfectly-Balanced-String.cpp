#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin>>s;
    set<char> st;
    for(auto i:s) {
        st.insert(i);
    }
    ll k=st.size();
    int i=0,j=k-1;
    set<char> St;
    for(int a=i;a<=j;a++)
    {
        St.insert(s[a]);
    }
    if(St.size()!=k)
    {
        cout<<"NO"<<endl;
        return;
    }

    while(j<s.size())
    {
        St.erase(s[i]);
        i++;
        j++;
        St.insert(s[j]);
        if(St.size()!=k)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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