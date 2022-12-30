#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string a;
        cin>>a;
        int l=a.length();
        int counter=0;
        if(l%2==0)
        {
            for(int j=0;j<l/2;j++)
            {
               if(a[j]==a[j+(l/2)])
               {
                 counter++;
               }
            }
             if(counter==l/2)
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