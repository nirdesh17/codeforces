#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(st.empty() || s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()=='(')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    cout<<st.size()/2<<endl;
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