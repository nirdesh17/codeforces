#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T mx(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T mn(T x,T y)
{
    return x<y?x:y;
}

ll mod=998244353;

// recursion its working fine but tles on larger test cases
void dfs(ll node, vector<ll> adj[], vector<ll>& nodes, ll& cnt,unordered_map<ll,ll>& parent) {
    
    for(auto neighbor:adj[node]){
        ll par=parent[node];
        if(par==-1){
            cnt=(cnt+1)%mod;
            parent[neighbor]=node;
            dfs(neighbor,adj,nodes,cnt,parent);
        } else if(nodes[neighbor]==(nodes[node]+nodes[par])){
            cnt=(cnt+1)%mod;
            parent[neighbor]=node;
            dfs(neighbor,adj,nodes,cnt,parent);
        }
    }
}

ll dfs(ll node, ll parent, vector<ll> adj[],vector<ll>&nodes, vector<vector<ll>>& dp){
    if(dp[node][parent+1]!=-1){
        return dp[node][parent+1];
    }

    ll total_paths=0;

    for(auto neighbor:adj[node]){
        if(parent==-1){
            total_paths=(total_paths+1)%mod;
            total_paths=(total_paths+dfs(neighbor,node,adj,nodes,dp))%mod;
        } else if(nodes[neighbor]==(nodes[node]+nodes[parent])){
            total_paths=(total_paths+1)%mod;
            total_paths=(total_paths+dfs(neighbor,node,adj,nodes,dp))%mod;
        }
    }
    return dp[node][parent+1]=total_paths;
}
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> nodes(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>nodes[i];
    }
    vector<ll> adj[n+1];
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    // recursion 
    // ll cnt=0;
    // for(ll i=1;i<=n;i++){
    //     unordered_map<ll,ll> parent;
    //     parent[i]=-1;
    //     dfs(i,adj,nodes,cnt,parent);
    // }

    // dp approach node,parent (gives mle)
    // parent can be -1 hence shifting by 1 therefore n+2
    ll cnt=0;
    vector<vector<ll>> dp(n+1,vector<ll>(n+2,-1));

    for(ll i=1;i<=n;i++){
        cnt=(cnt+dfs(i,-1,adj,nodes,dp))%mod;
    }



    

    // cout<<"ans "<<cnt%mod<<endl;
    cout<<cnt%mod<<endl;
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