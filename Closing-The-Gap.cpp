#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        test--;
        int num;
        cin>>num;
        int a[num];
        for(int i=0;i<num;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<num;i++)
        {
            sum=sum+a[i];
        }
        if(sum%num!=0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}