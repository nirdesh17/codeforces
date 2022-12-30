#include<bits/stdc++.h>
using namespace std;
  
  int factorial(int n)
  {
      if(n==1 or n==0)
      {
          return 1;
      }
      else
      {
          return n*factorial(n-1);
      }
  }
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)+1<<endl;
    return 0;
}