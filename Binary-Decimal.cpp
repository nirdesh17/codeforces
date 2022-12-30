#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int lengthh(ll n)
{
    int i=0;
    for(i;n>0;i++)
    {
        n=n/10;
    }
    return i;
}
int main()
{
    ll test;
    cin>>test;
    while (test>0)
    {
        ll n;
        cin>>n;
        ll len=lengthh(n);
        ll MAX=0;
        ll counter=0;
        for(int i=0;i<len;i++)
        {
            n=n%10;
            for(int j=0;n>0;j++)
            {
              n=n-1;
              counter++;
            }
            if(counter>MAX)
            {
                MAX=counter;
            }
            else
            {
                MAX=MAX;
            }
            counter=0;
        }
        ll m=pow(10,len-1);
        if(n/m==1)
        {
            cout<<MAX+1<<endl;
        }
        else
        {
            cout<<MAX<<endl;
        }
        test--;
    }
    
    return 0;
}