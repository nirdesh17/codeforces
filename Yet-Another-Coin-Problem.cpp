#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int check(int sum,int n)
{
    return (n - sum >= 0 && (n - sum) % 15 == 0);
}
void solve() {
    int n;
    cin >> n;
    int ans = n;

    for (int i = 0; i < 5; ++i) 
    {
        for (int j = 0; j < 5; ++j) 
        {
            for (int k = 0; k < 5; ++k) 
            {
                for (int l = 0; l < 5; ++l) 
                {
                    int sum = i * 10 + j * 6 + k * 3 + l * 1;
                    if (check(sum,n)) 
                    {
                        ans = min(ans, i + j + k + l + (n - sum) / 15);
                    }
                }
            }
        }
    }
    cout << ans << endl;
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


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int check(vector<ll>& a,ll cur,ll n,vector<vector<ll>>& dp)
// {
//     if(cur==a.size() || n<=0)
//     {
//         return (n==0)?0:INT_MAX-1;
//     }

//     if(dp[cur][n]!=0)
//     {
//         return dp[cur][n];
//     }

//     ll res=-1;
//     if(a[cur]>n)
//     {
//         ll nottake=0+check(a,cur+1,n-0,dp);
//         dp[cur][n]=res=nottake;
//     }
//     else
//     {
//         ll take=1+check(a,cur,n-a[cur],dp);
//         ll nottake=0+check(a,cur+1,n,dp);
//         dp[cur][n]=res=min(take,nottake);
//     }
//     return dp[cur][n]=res;
// }

// void solve() {
//     ll n;
//     cin>>n;
//     vector<ll> a={1,3,6,10,15};
//     ll cnt=0;
//     vector<vector<ll>> dp(5,vector<ll>(n+1,0));
//     cout<<check(a,0,n,dp)<<endl;
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