#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<(a+a)*(b+b)<<endl;
        }
        else if(a==1)
        {
            cout<<b*b<<endl;
        }
        else if(b==1)
        {
            cout<<a*a<<endl;
        }
        else if(a>b && 2*b<a)
        {
            cout<<a*a<<endl;
        }
         else if(a<b && 2*a<b)
        {
            cout<<b*b<<endl;
        }
         else if(a>b && 2*b>=a)
        {
            cout<<(b+b)*(b+b)<<endl;
        }
         else if(a<b && 2*a>=b)
        {
            cout<<(a+a)*(a+a)<<endl;
        }
       
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         if(a<b)
//         {
//             swap(a,b);
//         }
//         int n=max(a,2*b);
//         cout<<n*n<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
    
//         int a,b;
//         cin>>a>>b;
//         if(a<b)
//         {
//             swap(a,b);
//         }
//         int n=max(a,2*b);
        
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int n;
//         solve();
//         cout<<n*n<<endl;
//     }
//     return 0;
// }