#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int friends, sheets;
    cin>>friends>>sheets;
    int red,green,blue;
    // for RED
    if((friends*2)%sheets==0)
    {
        red=(friends*2)/sheets;
    }
    else
    {
        red=((friends*2)/sheets)+1;   
    }

    // for GREEN
    if((friends*5)%sheets==0)
    {
        green=(friends*5)/sheets;
    }
    else
    {
        green=((friends*5)/sheets)+1;   
    }

    // for BLUE
    if((friends*8)%sheets==0)
    {
        blue=(friends*8)/sheets;
    }
    else
    {
        blue=((friends*8)/sheets)+1;   
    }
    cout<<red+green+blue<<endl;
    
    return 0;
}