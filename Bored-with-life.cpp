#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n,m,a=1;
    cin>>n>>m;
    int b;
    b=min(n,m);
    for(int i=1;i<=b;i++)
    {
        a=a*i;
    }
    cout<<a;
    return 0;
}