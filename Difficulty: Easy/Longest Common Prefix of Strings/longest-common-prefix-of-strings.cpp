//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        std::sort(arr.begin(),arr.end());
        int n = arr.size();
        string x = arr[0];
        string y = arr[n-1];
        string ans="";
        int m = x.length();
        for(int i=0;i<m;i++){
            if(x[i] == y[i]){
                ans+=x[i];
            }
            else{
                break;
            }
        }
        if(!ans.empty()){
            return ans;
        }
        else{
            return "-1";
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends