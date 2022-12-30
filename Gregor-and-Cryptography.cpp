#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        if(n==5)
        {
            cout<<2<<" "<<4<<endl;
        }
        else
        {
            cout<<2<<" "<<(n-1)/2<<endl;
        }
    }
    return 0;
}