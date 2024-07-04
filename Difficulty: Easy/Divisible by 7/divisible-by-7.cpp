//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        if (num.empty()) {
            return 0;
        }

        // Implement division by 'a' using string manipulation
        int remainder = 0;
        for (char digit : num) {
            remainder = remainder * 10 + (digit - '0');
            remainder %= 7;
        }

        return (remainder == 0) ? 1 : 0;
        
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends