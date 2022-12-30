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
int main()
{
    int n;
    cin>>n;
    
    
    int counter=0;
    for(int i=0;i>=0;i++)
    {
        int sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        counter++;
        if(countDigit(sum)==1)
        {
            break;
        }
    }
    cout<<counter<<endl;
    

    return 0;
}