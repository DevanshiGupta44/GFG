//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     string hexadecimal(int n) {
        string num = "";
        while(n) {
            if(n%16 > 9)
                num += 'a' + (n%16 - 10);
            else
                num += n%16 + 48;
            n /= 16;
        }
        return num;
    }
  
    string encryptString(string S) {
        int count = 1;
        string result = "";
        for(int i=1; i<S.length(); i++) {
            if(S[i] == S[i-1])
                count++;
            else {
                result += S[i-1] + hexadecimal(count);
                count = 1;
            }
        }
        result += S[S.length() - 1] + hexadecimal(count);
        reverse(result.begin(), result.end());
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends