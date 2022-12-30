#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a*(b+c)<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<a*b*c<<endl;
    }
    else if(c>b && a<c)
    {
        cout<<(a+b)*c<<endl;
    }
    else if(a==1 && b==1 && c==1)
    
    return 0;
}