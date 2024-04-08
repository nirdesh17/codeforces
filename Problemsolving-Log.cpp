#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {
        char a=s[i];
        arr[a-'A']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        // cout<<arr[i]<<" ";
        if(arr[i]>=i+1)
            cnt++;
    }
    cout<<cnt<<endl;
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