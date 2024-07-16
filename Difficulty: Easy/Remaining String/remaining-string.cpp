//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int cnt=0,a=0;
        string ans;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == ch){
                cnt++;
            }
            if(cnt == count){
                a=i+1;
                break;
            }
        }
        if(cnt<count){
            return "";
        }
        for(int i=a;i<n;i++){
            ans.push_back(s[i]);
        }
        return ans;
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
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends