#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
  for(int i=0;i<test;i++)
  { 
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1;
    cin>>a2>>b2;
    cin>>a3>>b3;
    int m,n;
    m=abs((b2-b1)/(a2-a1));
    n=abs((b3-b1)/(a3-a1));
    int M,N;
    M=abs(a2-a1)+abs(b2-b1);
    N=abs(a3-a1)+abs(b3-b1);
     if(a1==b1 && a2==b2 && a3==b3)
    {
        cout<<abs(a2-a1)+abs(b2-b1)<<endl;
    }
    else if(n==m)
    {
        if(M>N)
        {
            cout<<abs(a2-a1)+abs(b2-b1)+2<<endl;
        }
        else
        {
            cout<<abs(a2-a1)+abs(b2-b1)<<endl;
        }
    }
   
    else
    {
        cout<<abs(a2-a1)+abs(b2-b1)<<endl;
    }
  }
    
    return 0;
}