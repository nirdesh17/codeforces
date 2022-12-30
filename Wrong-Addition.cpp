#include<bits/stdc++.h>
using namespace std;
  using ll=long long;

 int reversDigits(ll num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int countDigit(ll n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
     int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        ll a,s;
        ll f=0;
        
        cin>>a>>s;
        ll m=s;
       while(a>0)
       {
           ll c=0;
        if(a%10>s%10)
        {
             c=s%100-a%10;
            a=a/10;
            s=s/100;
        }
        else if(a%10==s%10)
        {
            c=0;
            a=a/10;
            s=s/10;
        }
        else if(a%10<s%10)
        {
             c=s%10-a%10;
            a=a/10;
            s=s/10;
        }
        ll e=countDigit(a);
        
        f=f+(c*pow(10,e));
       }
     
     
        if(reversDigits(f)>m)
        {
            cout<<-1<<endl;
        }
         else if(reversDigits(f)==0)
        {
            cout<<reversDigits(f)+10<<endl;
        }
        else
        {
            cout<<reversDigits(f)<<endl;
        }

    }
    return 0;
}