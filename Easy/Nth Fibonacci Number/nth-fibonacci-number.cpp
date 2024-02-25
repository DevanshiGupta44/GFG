//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++
class Solution {
  public:
  const int M=1e9+7;
    int nthFibonacci(int n){
        // code here
        int val[n+1];
        val[0]=0;
        val[1]=1;
        for(int i=2;i<=n;i++){
            val[i] =( val[i-1]%M + val[i-2]%M)%M;
        }
        return val[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends