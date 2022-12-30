#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        long long u,v;
        cin>>u>>v;
        long long x=u*u,y=-(v*v);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}