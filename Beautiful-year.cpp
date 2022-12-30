#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    a=a+1;
    for(int i=0;i>=0;i++)
    {
       int b,c,d,e;
       b=a%10;
       c=(a%100)/10;
       d=(a%1000)/100;
       e=a/1000;
       if(b==c || c==d || c==e || e==b || b==d || d==e)
       {
          a=a+1;
       }
       else
       {
          cout<<e<<d<<c<<b;
          break;
       }
    }
    
    return 0;
}