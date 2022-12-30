#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    for(ll i=0;i<a.length();i++)
    {
        for(ll j=0;j<b.length();j++)
        {
            if(a[i]<b[j])
            {
                a[i]=b[j];
                b[j]='.';
            }
        }
    }
    cout<<a<<endl;
    return 0;
}