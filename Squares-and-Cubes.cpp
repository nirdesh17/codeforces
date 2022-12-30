#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        ll a;
        cin>>a;
        int b,c;
        b=sqrt(a);
        c=cbrt(a)-1;
        // int counter=0;
        // for(int k=0;k<a;k++)
        // {
        //     for(int j=0;j<a;j++)
        //     {
        //         if(k*k==j*j*j)
        //         {
        //             counter++;
        //         }
        //     }
        // }
        // cout<<counter<<endl;
        cout<<b+c<<endl;
    }
    return 0;
}