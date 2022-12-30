#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int num;
    cin>>num;
    int test=num%10;
    if(test<=5)
    {
        num=(num/10)*10;
    }
    else
    {
        num=((num/10)*10)+10;
    }
    cout<<num<<endl;
    return 0;
}