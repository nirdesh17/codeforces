// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// vector<vector<char>> transpose(vector<vector<char>>& b,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             swap(b[i][j],b[j][i]);
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n/2;j++)
//         {
//             swap(b[i][j],b[i][n-j-1]);
//         }
//     }
//     return b;
// }
// void solve() {
//     int n;
//     cin>>n;
//     vector<vector<char>> a(n,vector<char>(n));
//     vector<vector<char>> b(n,vector<char>(n));
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>a[i][j];
//             b[i][j]=a[i][j];
//         }
//     }
//     b=transpose(b,n);
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i][j]!=b[i][j])
//             {
//                 cnt+=abs(b[i][j]-a[i][j]);
//                 if(b[i][j]>a[i][j])
//                 {
//                     a[i][j]=b[i][j];
//                     b=transpose(a,n);
//                     j--;
//                 }
//             }
//         }
//     }
//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<n;j++)
//     //     {
//     //         cout<<a[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<n;j++)
//     //     {
//     //         cout<<b[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     cout<<cnt<<endl;
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
    ll n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.push_back(a);
    }
    int ans=0;
    vector<char> v;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            v.clear();
            v.push_back(s[i][j]);
            v.push_back(s[j][n-i-1]);
            v.push_back(s[n-i-1][n-j-1]);
            v.push_back(s[n-j-1][i]);

            sort(v.begin(),v.end());

            for(auto e:v)
            {
                ans+=(v.back()-e);
            }
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