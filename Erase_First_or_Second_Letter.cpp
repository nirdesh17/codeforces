// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// unordered_set<string> st;
// void solve(string s)
// {
//     if (st.find(s) != st.end()) {
//         // If the string is already generated, return
//         return;
//     }

//     // Add the s string to the set of generated strings
//     st.insert(s);

//     // Check the two possible operations
//     if (s.length() > 1) {
//         solve(s.substr(1));  // Remove the first character
//         solve(s.substr(0, 1) + s.substr(2));  // Remove the second character
//     }
// }
// void solve() {
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
//     st.clear();
//     solve(s);
//     cout << st.size() << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


//above solution give mle

// combinatrics solution
// https://www.youtube.com/watch?v=Kl8PPy3rFRE&ab_channel=TLEEliminators-byPriyansh
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> f(26);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(!f[s[i]-'a'])
        {
            f[s[i]-'a']=1;
            ans+=(n-i);
        }
    }
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