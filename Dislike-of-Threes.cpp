#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a[1666],i,j;
    for (i = 1; i <= 1666; i++)
    {
        a[i]=i;
    }
    int b[1000];
    for (j = 1; j <=1000; j++)
    {
        if(a[j]%3!=0 || a[j]%10!=3)
        {
            b[j]=a[j];
        }
        else
        {
            b[j]=a[j+1];
        }
        
    }
    cout<<b[6]<<"\n";
    cout<<a[4];
    
    return 0;
}