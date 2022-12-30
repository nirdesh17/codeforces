#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    ll count=0;
    if(a.length()!=b.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(ll i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        count++;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(count==2 && a==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}