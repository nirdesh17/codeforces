#include <bits/stdc++.h>
using namespace std;
#define ll long long int

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

void solve()
{
    int n, r; 
    cin >> n; 
    int sum = 0ll, O = 0, E = 0;
    vector<ll> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i = 0; i < n; ++i) 
    {
        sum += c[i];
        if(c[i] & 1)
        {
            O++;
        }
        else 
        {
            E++;
        }
        r = O / 3;
        if(E == 0 && O == 1) 
        {
            r = 0;
        }
        else if(O % 3 == 1) 
        {
            r = (O + 2) / 3;
        }
        cout << sum - r << " ";
    }
    cout << endl;

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