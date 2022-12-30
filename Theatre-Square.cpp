#include<bits/stdc++.h>
using namespace std;
using ll= unsigned long long;
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll counter1,counter2;
    if(m%a==0 && n%a==0)
    {
        counter1=m/a;
        counter2=n/a;
        cout<<counter1*counter2<<endl;
    }
    else if(m%a==0 && n%a!=0)
    {
        counter1=m/a;
        counter2=(n/a)+1;
        cout<<counter1*counter2<<endl;
    }
    else if(m%a!=0 && n%a==0)
    {
        counter1=(m/a)+1;
        counter2=n/a;
        cout<<counter1*counter2<<endl;
    }
    else
    {
         counter1=(m/a)+1;
        counter2=(n/a)+1;
        cout<<counter1*counter2<<endl;
    }
    return 0;
}