#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    char a[3][3];
    int b=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='?')
            {
                b=i;
            }
        }
    }
    char c='A';
    for(int i=0;i<3;i++)
    {
        bool found = false;
        for(int j=0;j<3;j++)
        {
            if(a[b][j] == c)
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout<<c<<endl;
            break;
        }
        c++;
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