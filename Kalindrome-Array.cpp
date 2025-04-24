// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void check(int a,bool &ans,vector<ll> b)
// {
//     vector<int> c;
//     for(int i=0;i<b.size();i++)
//     {
//         if(b[i]!=a)
//         {
//             c.push_back(b[i]);
//             // cout<<b[i];
//         }
//     }
//     for(int i=0;i<c.size()/2;i++)
//     {
//         if(c[i]!=c[c.size()-1-i])
//         {
//             // cout<<c[i];
//             return;
//         }
//     }
//     ans=true;
// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     ll i = 0, j = n - 1;
//     bool ans=true;
//     while (i < j) {
//         if (a[i] != a[j]) {
//             // cout<<a[i]<<" "<<a[j]<<endl;
//             ans = false;
//             check(a[i],ans,a);
//             check(a[j],ans,a);
//         }
//         i++;
//         j--;
//     }
    
//     if(ans)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }

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


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPalindrome(vector<ll>& b, int a) {
    int i = 0, j = b.size() - 1;
    while (i < j) {
        while (b[i] == a) 
        {
            i++; 
        }
        while (b[j] == a)
        {
            j--; 
        }
        if (b[i] != b[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll i = 0, j = n - 1;
    while (i < j) {
        if (a[i] != a[j]) {
            if (isPalindrome(a, a[i]) || isPalindrome(a, a[j])) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            return;
        }
        i++;
        j--;
    }
    cout << "YES" << endl;
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
