#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if( (a<b+c && b<a+c && c<a+b) || (b<c+d && c<b+d && d<b+c) || (a<c+d && c<a+d && d<c+a) || (a<b+d && b<a+d && d<a+b))
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if((a==b+c || b==a+c || c==a+b) || (b==c+d || c==b+d || d==b+c) || (a==c+d || c==a+d || d==c+a) || (a==b+d || b==a+d || d==a+b))
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}