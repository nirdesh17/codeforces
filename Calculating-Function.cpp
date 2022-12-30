#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    long long num;
    cin>>num;
    if(num%2==0)
    {
        cout<<num/2<<endl;
    }
    else 
    {
        cout<<(num/2)-num<<endl;
    }
    return 0;
}