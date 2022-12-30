#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<string> a;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }
    int counter=0;
    for(ll i=0;i<n;i++)
    {
        int val=0;
        for(ll j=0;j<=m;j++)
        {
            if(a[i].find(to_string(j))!=-1)
            val++;
        }
        if(val==m+1)
        counter++;
    }
    cout<<counter<<endl;
    

    
    return 0;
}