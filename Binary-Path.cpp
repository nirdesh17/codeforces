#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string temp=s1.substr(0,i+1)+s2.substr(i,n-i);
        mp[temp]++;
    }
    cout<<mp.begin()->first<<endl;
    cout<<mp.begin()->second<<endl;
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


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void dfs(vector<string> &v,ll i,ll j,vector<vector<int>> &vis,map<string,int> &m,string& s){
//     if(i<0 || j<0 || i>=2 || j>=v[0].size() || vis[i][j]==1){
//         return;
//     }
//     if(i==1 && j==v[0].size()-1){
//         m[s]++;
//         return;
//     }
//     vis[i][j]=1;
    
//     s+=v[i][j];
//     dfs(v,i+1,j,vis,m,s);
//     dfs(v,i,j+1,vis,m,s);
//     s.pop_back();
//     vis[i][j]=0;
// }
// void solve() {
//     ll n;
//     cin>>n;
//     vector<string> v(2);
//     for(ll i=0;i<2;i++){
//         cin>>v[i];
//     }
//     map<string,int> m;
//     vector<vector<int>> vis(2,vector<int>(n,0));
//     string s="";
//     dfs(v,0,0,vis,m,s);
//     cout<<m.begin()->first<<v[1][n-1]<<endl;
//     cout<<m.begin()->second<<endl;
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
