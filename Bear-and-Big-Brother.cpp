#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a,b;
    cin>>a>>b;
    int n=1;
    for(int i=0;i>=0;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            cout<<n;
            break;
        }
        n++;
    }
    return 0;
}