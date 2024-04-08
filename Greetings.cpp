#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> people(n);

    for (int i = 0; i < n; i++) {
        cin >> people[i].first >> people[i].second;
    }

    sort(people.begin(), people.end());

    ll greetings = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (people[j].second < people[i].second) {
                greetings++;
            } 
        }
    }

    cout << greetings << endl;
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
