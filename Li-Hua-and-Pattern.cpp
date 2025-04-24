#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> arr(n,vector<ll>(n));
    vector<vector<ll>> arr1(n,vector<ll>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            arr1[n-i-1][n-j-1]=arr[i][j];
        }
    }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=arr1[i][j])
            {
                cnt++;
            }
        }
    }


    cnt=cnt/2;
    if(cnt>k)
    {
        cout<<"NO"<<endl;
    }
    else if(cnt==k)
        cout<<"YES"<<endl;
    else
    {
        cnt=cnt-k;
        // if matrix if odd then centre element can be change multiple time still rotation wont be get affect
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else if(cnt%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        
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