#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int Alice, Barbara, Cerene,Polycarp;
        cin>>Alice>>Barbara>>Cerene>>Polycarp;
        int Max;
        Max=max(max(Alice,Barbara),Cerene);
        int t1=Max-Alice;
        
        int t2=Max-Barbara;
       
        int t3=Max-Cerene;
       int diff=t1+t2+t3;
       if(Polycarp>=diff)
       {
           Polycarp=Polycarp-diff;
        if(Polycarp%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}