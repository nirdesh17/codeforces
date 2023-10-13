#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        sort(a.begin(), a.end());
        ll maxFrogs = 1; // At least 1 frog can be caught
        ll cnt=1;
        for(int i=n-2; i>=0; i--) {
            if (a[i] % a[i+1] == 0) {
                cnt++;
            } else {
                maxFrogs = max(maxFrogs, cnt);
                cnt=1;
            }
        }

        cout << maxFrogs << endl;
    }
    return 0;
}
