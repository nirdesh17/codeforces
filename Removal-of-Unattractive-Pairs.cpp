#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt[26] = {0};
    for (auto c : s)
    {
        cnt[c - 'a']++;
    }

    int Cnt = 0;
    for (int i = 0; i < 26; i++)
        Cnt = max(Cnt, cnt[i]);
    int result = 0;
    if (Cnt > n / 2)
    {
        result = 2 * Cnt - n;
    }
    else if (n % 2 == 1)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    cout<<result<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}