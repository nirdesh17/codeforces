#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int h,m;
        cin>>h>>m;
       if(h==0 && m==0)
       {
           cout<<"0";
       }
       else
       {
           int b,c;
           b=(23-h)*60;
           c=(60-m)+b;
           cout<<c<<endl;
           
       }
    }
    return 0;
}