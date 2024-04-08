#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> cv;

    for (char ch : s) 
    {
        if (ch == 'a' || ch == 'e') 
        {
            cv.push_back('V');
        } 
        else 
        {
            cv.push_back('C');
        }
    }


    vector<int> cnt;
    for (int i = n - 1; i > 0; ) 
    {
        if (cv[i] == 'V') 
        {
            cnt.push_back(2);
            i -= 2;
        }
        else 
        {
            cnt.push_back(3);
            i -= 3;
        }
    }

    reverse(cnt.begin(),cnt.end());
    int i = 0;
    string ans="";
    for (int length : cnt) 
    {
        for (int j = 0; j < length; ++j) 
        {
            ans+=s[i++];
        }
        ans+=".";
    }

   ans.pop_back();
    cout<<ans<<endl;
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