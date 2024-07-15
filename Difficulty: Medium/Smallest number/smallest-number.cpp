//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int sum(int n){
      int s=0;
      while(n){
          s+=n%10;
          n/=10;
      }
      return s;
  }
  
  
    string smallestNumber(int s, int d) {
        // code here
        for(int i=pow(10,d-1);i<=pow(10,d)-1;i++){
            if( sum(i) == s ) return to_string(i);
        }
        return "-1";
    }
};



//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends