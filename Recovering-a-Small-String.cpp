// mathematical solution
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll x;
    cin>>x;
    ll first=max(1ll,(x-52));
    ll second=max(1ll,(x-first-26));
    ll third=max(1ll,(x-first-second));

    cout<<char('a'+first-1)<<char('a'+second-1)<<char('a'+third-1)<<endl;
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



// brute force
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin>>n;
//     string s="";
//     if(n==3)
//     {
//         cout<<"aaa"<<endl;
//         return;
//     }
//     if(n==27)
//     {
//         cout<<"aay"<<endl;
//         return;
//     }
//     // if(n==52)
//     // {
//     //     cout<<"ay"<<endl;
//     //     return;
//     // }
//     if(n>26)
//     {
//         while(n>26)
//         {
//             s+='z';
//             n-=26;
//         }
//         if(s.length()==1)
//         {
//             s+='a'+(n-2);
//             s+='a';
//         }
//         else if(s.length()==2)
//         {
//             s+='a'+(n-1);
//         }
//     }
//     else
//     {
//         s+='a'+(n-3);
//         s+='a';
//         s+='a';
//     }
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;

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