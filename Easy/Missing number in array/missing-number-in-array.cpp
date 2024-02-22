//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends


class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        std::sort(array.begin(),array.end());
        if(array[0]!=1){
            return 1;
        }
        if (array[n - 2] != n) {
            return n;
        }
        for(int i=0;i<n-1;i++){
            if(array[i] != (array[i+1] - 1)){
                return (array[i] + 1);
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends