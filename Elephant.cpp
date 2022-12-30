#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int num;
    cin>>num;
    int m;
    m=num%5;
    if(m>0)
    {
        cout<<(num/5)+1<<endl;
    }
    else
    {
        cout<<num/5<<endl;
    }
    return 0;
}