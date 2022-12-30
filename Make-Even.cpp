#include<bits/stdc++.h>
using namespace std;
  int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int odd(int a)
{
    int count = 0;
    while (a > 0)
    {
        a = a / 10;
        if(a!=0)
        {
        if(a%2==0)
        {
            count++;
        }}
    }
    return count;
}
int main()
{
    int test;
   cin>>test;
    while (test>0)
    {
        test--;
        int num;
        cin>>num;
        if(num%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int len=countDigit(num)-1;
            int tens=pow(10,len);
            if((num/tens)%2==0)
            {
                cout<<1<<endl;
            }
            else if(odd(num)!=0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    
    return 0;
}