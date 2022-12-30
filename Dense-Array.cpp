#include<bits/stdc++.h>
using namespace std;
int insert(int n){
    for(int i=1; i<n ;i++){
         int maxii=max(a[i],a[i+1]);
          int minii=min(a[i],a[i+1]);

          int count;

        if( ! maxii/minii<=2){
            
            cin >> a[i];
            count++;

        }
        else(){
            break;
        }

    }
}
  
 
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
       int size;
       cin>>size;
       int a[size];
       for(int i=0;i<size;i++)
       {
           cin>>a[i];
       }
      int counts=0;
      for(int i=0;i<size-1;i++)
      {
          int maxii=max(a[i],a[i+1]);
          int minii=min(a[i],a[i+1]);
          while(!(maxii/minii)<2)
          {
              maxii=ceil(maxii/2);
              counts++;
          }
      }
      cout<<counts<<endl;
    }
    return 0;
}