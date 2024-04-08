#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void printAnswerString(int n, char a)
{
    for (int j = 0; j < n; j++)
    {
        cout << a;
    }
    cout << endl;
}

void handleEmptyS(int n)
{
    cout << "NO" << endl;
    char a = 'a';
    printAnswerString(n, a);
}

void check(string s) {
    
    // unordered_map<char,int> mp;
    vector<int> mp(s.length(),0);
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]-'a']++;
    }
    // for(auto i:mp)
    //     cout<<i.first<<" "<<i.second<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(mp[i]<s.length())
        {
            cout<<"NO"<<endl;
            char a=i+'a';
            for(int j=0;j<s.length();j++)
            {
                cout<<a;
            }
            cout<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
void solve()
{
    int n, k, m, cnt = 0;
    string temp, s, ans;
    cin >> n >> k >> m >> temp;

    for (auto el : temp)
    {
        if (k > (int)el - 97)
        {
            s.push_back(el);
        }
    }

    if (s.empty())
    {
        handleEmptyS(n);
        return;
    }

    map<char, int> mp;

    for (auto el : s)
    {
        mp[el]++;
        if (mp.size() == k)
        {
            ans.push_back(el);
            ++cnt;
            mp.clear();
        }
    }

    if (cnt >= n)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;

    if (mp.empty())
    {
        while (ans.size() < n)
        {
            ans.push_back(s[s.size() - 1]);
        }
        cout << ans;
        cout << endl;
        return;
    }

    char g;

    for (char c = 'a'; c < char(97 + k); ++c)
    {
        if (mp[c] == 0)
        {
            g = c;
            break;
        }
    }

    printAnswerString(n, g);
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}


































// void solve() {
//     ll n,k,x;
//     cin>>n>>k>>x;
//     string s;
//     cin>>s;
//     // unordered_map<char,int> mp;
//     vector<int> mp(n,0);
//     for(int i=0;i<x;i++)
//     {
//         mp[s[i]-'a']++;
//     }
//     // for(auto i:mp)
//     //     cout<<i.first<<" "<<i.second<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if(mp[i]<n)
//         {
//             cout<<"NO"<<endl;
//             char a=i+'a';
//             for(int j=0;j<n;j++)
//             {
//                 cout<<a;
//             }
//             cout<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
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
