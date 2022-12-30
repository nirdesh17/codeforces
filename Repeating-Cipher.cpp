#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    string a;
    for(ll i=0;i<n;sum=sum+i)
    {
        if(sum>=n)
        break;
        a.push_back(s[sum]);
        i++;
    }
    cout<<a<<endl;
    return 0;
}