// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// Brute forcs checking all possibilities
// void solve() {
//     int n[3];
//     cin>>n[0]>>n[1]>>n[2];
//     sort(n,n+3);
//     if(n[0]==n[1] && n[1]==n[2])
//         cout<<"YES"<<endl;
//     else if(n[0]==n[1])
//     {
//         if(n[0]*3==n[2])
//         {
//             cout<<"YES"<<endl;
//         }
//         else if(n[0]+n[1]==n[2])   
//             cout<<"YES"<<endl;
//         else if(2*(n[0]+n[1])==n[2])   
//             cout<<"YES"<<endl;
//         else    
//             cout<<"NO"<<endl;
//     }
//     else if(n[1]==n[2])
//     {
//         if(n[0]*2==n[1])
//             cout<<"YES"<<endl;
//         else
//             cout<<"NO"<<endl;
//     }
//     else if(n[0]!=n[1] && n[1]!=n[2])
//     {
//         if(n[0]+n[0]==n[1])
//         {
//             if(n[0]+n[1]==n[2])
//             {
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//         }
//         else
//             cout<<"NO"<<endl;
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

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    multiset<int> m;
    m.insert(a);
    m.insert(b);
    m.insert(c);
    for(int i=0;i<3 && *m.rbegin()!=*m.begin();i++)
    {
        int x=*m.rbegin();
        m.erase(--m.end());

        m.insert(*m.begin());
        m.insert(x-*m.begin());
    }
    if(*m.rbegin()==*m.begin()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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