#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int mod = 1e9 + 7;
int solve3(int n) 
{ 
    int sum = 0; 
    while (n > 0) 
    { 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum; 
}

int solve2(int n, int a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    int d = (int)(log10(n)); 
    int p = (int)(ceil(pow(10, d))); 
    int msd = n / p; 
     
    return (msd * a[d] + (msd * (msd - 1) / 2) * p + 
            msd * (1 + n % p) + 
            solve2(n % p, a)); 
} 
 
 
int solve(int n) 
{ 
    int d = (int)(log10(n)); 
    int a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(int i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (int)(ceil(pow(10, i - 1))); 
 
    return solve2(n, a); 
} 

void solve() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<log(n);i++)
    {
        sum+=i;
    }
    cout<<solve(n)<<endl;
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