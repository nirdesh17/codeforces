#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll h1,m1,h2,m2;
    char c,d;
    cin>>h1>>c>>m1;
    cin>>h2>>d>>m2;
    ll a=h1*60+m1+h2*60+m2;
    ll b=a/2;
    ll e=b/60,f=b%60;
    if(e<10 && f<10)
    cout<<"0"<<e<<":"<<"0"<<f<<endl;
    else if(e<10)
    cout<<"0"<<e<<":"<<f<<endl;
    else if(f<10)
    cout<<e<<":"<<"0"<<f<<endl;
    else
    cout<<e<<":"<<f<<endl;
    return 0;
}