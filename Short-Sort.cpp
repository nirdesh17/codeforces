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
        string s;
        cin>>s;
        if(s=="abc" || s=="bac" || s=="cba" || s=="acb")
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}