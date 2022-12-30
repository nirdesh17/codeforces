#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a;
    cin>>a;
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1;
    cin>>a2>>b2;
    cin>>a3>>b3;
    if(a==a1)
    { a=b1;}
    if(a==b1)
    { a=a1;}
    if(a==a2)
    { a=b2;}
    if(a==b2)
    { a=a2;} 
    if(a==a3)
    { a=b3;}
    if(a==b3)
    { a=a3;}

    //  cout<<a<<endl;
     
ofstream f("shell_game.txt");

if (f.is_open())
{
    f << a << endl;
}
  f.close();
}


ifstream f("shell_game.txt");

    if(f.is_open())
        cout << a;}
    return 0;
}