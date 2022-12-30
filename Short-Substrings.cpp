#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        string a;
        cin>>a;
        vector<char> b;
        b.push_back(a[0]);
        b.push_back(a[1]);
        for(ll j=2;j<a.size();j++)
        {
            if(j%2!=0)
            {
                b.push_back(a[j]);
            }
        }
        for(ll k=0;k<b.size();k++)
        {
            cout<<b[k];
        }
        cout<<endl;
    }
    return 0;
}