#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int A,B;
    cin>>A>>B;
    int C=max(A,B);
   switch (C)
   {
   case 1:
       cout<<"1/1"<<endl;
       break;
   case 2:
       cout<<"5/6"<<endl;
       break; 
   case 3:
       cout<<"2/3"<<endl;
       break;
   case 4:
       cout<<"1/2"<<endl;
       break;
   case 5:
       cout<<"1/3"<<endl;
       break;
   case 6:
       cout<<"1/6"<<endl;
       break; 
   
   default:
       break;
   }
    
    return 0;
}