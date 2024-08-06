//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
// class Solution {
//     public:
//         int isValid(string s) {
//             // code here
//             string w="";
//             int cnt=3;
//             for(int i=0;i<s.length();i++){
//                 if(s[i] == '.'){
//                     cnt--;
//                     int ww = std::stoi(w);
//                     if(ww>=0 && ww<=255){
//                         w="";
//                     }
//                     else{
//                         return 0;
//                     }
//                 }
//                 else{
//                     w=w+s[i];
//                 }
//             }
//             if(cnt!=0){
//                 return 0;
//             }
//             else{
//                 return 1;
//             }
//         }
// };

class Solution {
public:
    int isValid(std::string s) {
        std::string w = "";
        int cnt = 3; // We expect 3 dots in a valid IPv4 address

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                if (w.empty() || w.length() > 3 || std::stoi(w) < 0 || std::stoi(w) > 255) {
                    return 0;
                }
                // Avoid leading zeros, except for the number "0"
                if (w.length() > 1 && w[0] == '0') {
                    return 0;
                }
                cnt--;
                w = "";
            } else {
                // Ensure that the character is a digit
                if (!isdigit(s[i])) {
                    return 0;
                }
                w += s[i];
            }
        }

        // Final check for the last segment
        if (cnt != 0 || w.empty() || w.length() > 3 || std::stoi(w) < 0 || std::stoi(w) > 255) {
            return 0;
        }
        if (w.length() > 1 && w[0] == '0') {
            return 0;
        }

        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends