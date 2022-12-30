#include<bits/stdc++.h>
using namespace std;
  
  int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        int num=0;
        int b=n;
        while(b>0)
        {
            int a;
            a=b%i;
            num=num+a;
            b=b/i;
        }
        sum=sum+num;
    }
    int c=n-2;
    int d=gcd(sum,c);
    cout<<sum/d<<"/"<<c/d<<endl;
    return 0;
}