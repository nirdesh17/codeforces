// // mle
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int

// // vector<int> nextSmallerElement(vector<int> &arr, int n)
// // {
// //     // Write your code here.
// //     stack<int> a;
// //     a.push(-1);
// //     vector<int> b(n);
// //     for(int i=n-1;i>=0;i--)
// //     {
// //             while(a.top()!=-1 &&arr[i]<=arr[a.top()])
// //             {
// //                 a.pop();
// //             }
    
// //         b[i]=a.top();
// //         a.push(i);
// //     }
// //     return b;
// // }

// // vector<int> prevSmallerElement(vector<int> &arr, int n)
// // {
// //     // Write your code here.
// //     stack<int> a;
// //     a.push(-1);
// //     vector<int> b(n);
// //     for(int i=0;i<n;i++)
// //     {
// //             while(a.top()!=-1 &&arr[i]<=arr[a.top()])
// //             {
// //                 a.pop();
// //             }
    
// //         b[i]=a.top();
// //         a.push(i);
// //     }
// //     return b;
// // }

// // int largestRectangleArea(vector<int>& heights) {
// //     int n=heights.size();

// //     vector<int> next(n);
// //         next=nextSmallerElement(heights,n);
// //     vector<int> prev(n);
// //         prev=prevSmallerElement(heights,n);
// //     int area=INT_MIN;
// //     for(int i=0;i<n;i++)
// //     {
// //         int a=heights[i];
// //         if(next[i]==-1)
// //         {
// //             next[i]=n;
// //         }
// //         int b=next[i]-prev[i]-1;
// //         int newarea=a*b;
// //         area=max(newarea,area);
// //     }
// //     return area;
// // }
// // int maximalRectangle(vector<vector<char>>& matrix) {
// //     int maxi=0;

// //     vector<int> hist(matrix[0].size(),0);
// //     for(int i=0;i<matrix.size();i++)
// //     {
// //         for(int j=0;j<matrix[0].size();j++)
// //         {
// //             if(matrix[i][j]=='1')
// //                 hist[j]++;
// //             else
// //                 hist[j]=0;
// //         }
// //         int area=largestRectangleArea(hist);
// //         maxi=max(maxi,area);
// //     }   
// //     return maxi;
// // }


// // void solve() {
// //     string s;
// //     cin>>s;
// //     ll n=s.length();
// //     vector<char> a(n);
// //     for(int i=0;i<n;i++)
// //     {
// //         a[i]=s[i];
// //     }
// //     vector<vector<char>> mat;
// //     mat.push_back(a);
// //     ll i=1;
// //     while(i<n)
// //     {
// //         ll b=a[n-1];
// //         for(int j=n-1;j>=0;j--)
// //         {
// //             a[j]=a[j-1];
// //         }
// //         a[0]=b;
// //         mat.push_back(a);
// //         i++;
// //     }

// //     ll ans=maximalRectangle(mat);
// //     cout<<ans<<endl;
    
// // }

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     ll t;
// //     cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// //     return 0;
// // }


// tle
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// vector<int> nextSmallerElement(vector<int> &arr, int n) {
//     stack<int> a;
//     a.push(-1);
//     vector<int> b(n);
//     for(int i = n - 1; i >= 0; i--) {
//         while(a.top() != -1 && arr[i] <= arr[a.top()]) {
//             a.pop();
//         }
//         b[i] = a.top();
//         a.push(i);
//     }
//     return b;
// }

// vector<int> prevSmallerElement(vector<int> &arr, int n) {
//     stack<int> a;
//     a.push(-1);
//     vector<int> b(n);
//     for(int i = 0; i < n; i++) {
//         while(a.top() != -1 && arr[i] <= arr[a.top()]) {
//             a.pop();
//         }
//         b[i] = a.top();
//         a.push(i);
//     }
//     return b;
// }

// int largestRectangleArea(vector<int>& heights) {
//     int n = heights.size();
//     vector<int> next = nextSmallerElement(heights, n);
//     vector<int> prev = prevSmallerElement(heights, n);
//     int area = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         int a = heights[i];
//         if(next[i] == -1) {
//             next[i] = n;
//         }
//         int b = next[i] - prev[i] - 1;
//         int newarea = a * b;
//         area = max(newarea, area);
//     }
//     return area;
// }

// int maximalRectangle(string &s) {
//     int n = s.length();
//     vector<int> hist(n, 0);
//     int maxArea = 0;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(s[(i + j) % n] == '1') {
//                 hist[j]++;
//             } else {
//                 hist[j] = 0;
//             }
//         }
//         int area = largestRectangleArea(hist);
//         maxArea = max(maxArea, area);
//     }
//     return maxArea;
// }

// void solve() {
//     string s;
//     cin >> s;
//     int ans = maximalRectangle(s);
//     cout << ans << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }









#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        s += s;  // Double the string to account for cyclic shifts

        int k = 0, z = 0;
        for (char c : s) {
            z = (c == '1') ? z + 1 : 0;  // Count consecutive '1's
            k = max(k, z);  // Update maximum length of consecutive '1's
        }

        if (k > n) {
            cout << (ll)n * n << '\n';  // If the maximum length is more than n, max area is n^2
        } else {
            ll side_a = (k + 1) / 2;  // First dimension
            ll side_b = (k + 2) / 2;  // Second dimension
            cout << side_a * side_b << '\n';  // Maximum area
        }
    }
}
