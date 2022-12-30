#include<bits/stdc++.h>
using namespace std;
  
int BinaryToDecimal(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   return decimalNumber;
}  
int main()
{
    long long n;
    cin>>n;
    int a=BinaryToDecimal(n);
    int count;
    if(a%4==0)
    {
        count=-1;
    }
    else
    {
        count=0;
    }
    while(a>0)
    {
        a=a/4;
        count++;
    }
    cout<<count<<endl;
    return 0;
}