#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(n==0 && m==0)
    cout<<0<<" "<<0<<endl;
    else if(n==0)
    cout<<"Impossible"<<endl;
    else if(m==0)
    cout<<n<<" "<<n<<endl;
    else
    cout<<max(n,m)<<" "<<n+m-1<<endl;
    return 0;
}