#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve1() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<int> mex(n, -1); 
    for (int i = 0; i < n; i++) {
        mex[a[i]] = a[i];
    }
    int Smex = -1;
    for(int i = 0; i < n; i++) {
        if(mex[i] == -1) {
            Smex = i;
            break;
        }
    }
    if(Smex == n) {
        cout << "-1\n";
        return;
    }
    if(mp.begin()->first > Smex) {
        cout << n << "\n";
        for(int i = 0; i < n; i++) {
            cout << i + 1 << " " << i + 1 << "\n";
        }
        return;
    } else {
        int cnt = 0;
        for(auto i : mp) {
            if(i.first < Smex) {
                cnt++;
            }
        }
        int A = mp.begin()->second;
        for(auto i : mp) {
            if(i.first < Smex) {
                if(i.second < A) {
                    cout << "-1\n";
                    return;
                }
            } else {
                break;
            }
        }

        cout << cnt + 1 << "\n";
        int start = 0, end = 0;
        stack<int> S;
        while (end < n) {
            if(a[end] < Smex && S.size() < cnt) {
                S.push(a[end]);
                end++;
            } else if(S.size() == cnt) {
                cout << start + 1 << " " << end << "\n";
                start = end;
                while(!S.empty()) {
                    S.pop();
                }
            } else {
                end++;
            }
        }
        cout << start + 1 << " " << n << "\n";
    }
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<ll> b(n+1,0);
    for(auto i:a)
    {
        b[i]=1;
    }

    ll i=0;
    while(i<=n and b[i]!=0)
    {
        i++;
    }

    if(i>n)
    {
        cout<<-1<<endl;
        return;
    }

    vector<pair<ll,ll>> ans;
    set<ll> s;
    ll k=0;
    vector<ll> c;
    for(int j=0;j<n;j++)
    {
        if(a[j]<i)
        {
            s.insert(a[j]);
        }

        if(s.size()>=i)
        {
            ans.push_back({k,j});
            k=j+1;
            s.clear();
        }
    }

    if(k<n)
    {
        ans.back().second=n-1;
    }

    if(ans.size()<2)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<ans.size()<<endl;
    for(auto j:ans)
    {
        cout<<j.first+1<<" "<<j.second+1<<endl;
    }
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
