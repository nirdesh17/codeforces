#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test ;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<"3"<<endl;;
        }
        else if(a==2)
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(a%2==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
    }
    return 0;
}