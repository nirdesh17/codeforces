#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> printDivisors(int n)
{
    vector<ll> a;
    for (int i = 2; i <= n; i++)
        if (n % i == 0 )
            a.push_back(i);
            return a;
}

void reverseStr(string& str,ll a)
{
    
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < a / 2; i++)
        swap(str[i], str[a - i - 1]);
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> c=printDivisors(n);
    string s;
    cin>>s;
    
    for(ll i=0;i<c.size();i++)
    {
        reverseStr(s,c[i]);
    }
    cout<<s<<endl;

    return 0;
}