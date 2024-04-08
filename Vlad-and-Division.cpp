#include<bits/stdc++.h>
using namespace std;
// #define int long long int
int solve1(int n) 
{ 
    int sum = 0; 
    while (n > 0) 
    { 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum; 
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(auto i:a)
    {
        mp[i]++;
    }
    int cnt = 0;

    for(auto i : a) {
        int c = i ^ INT_MAX;

        if(mp.find(c) != mp.end() && mp[c] > 0 && mp.find(i) != mp.end() && mp[i] > 0) {
            cnt++;
            mp[c]--;
            mp[i]--;

            if(mp[c] <= 0) {
                mp.erase(c);
            }

            if(mp[i] <= 0) {
                mp.erase(i);
            }
        }  
    }

    cout << cnt + (n - 2 * (cnt)) << endl;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}