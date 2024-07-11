//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k) {
        // Your code goes here
        // int n = arr.size();
        // std::sort(arr.begin(),arr.end());
        // vector<vector<int>> ans;
        // for(int i=0;i<n-3;i++){
        //     for(int j=i+1;j<n-2;j++){
        //         int start = i+2;
        //         int end = n-1;
        //         while(start<end){
        //             if((arr[i]+arr[j]+arr[start]+arr[end]) == k){
        //                 // ans.push_back(arr[i]);
        //                 // ans.push_back(arr[j]);
        //                 // ans.push_back(arr[start]);
        //                 // ans.push_back(arr[end]);
        //                 ans.push_back({arr[i], arr[j], arr[start], arr[end]});
        //             }
        //             else if((arr[i]+arr[j]+arr[start]+arr[end]) < k){
        //                 start++;
        //             }
        //             else{
        //                 end--;
        //             }
        //         }
        //     }
        // }
        // return ans;
        //code:correct
         int n = arr.size();
        std::sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicates for i
            
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && arr[j] == arr[j - 1]) continue; // Skip duplicates for j
                
                int start = j + 1;
                int end = n - 1;
                
                while (start < end) {
                    int sum = arr[i] + arr[j] + arr[start] + arr[end];
                    
                    if (sum == k) {
                        ans.push_back({arr[i], arr[j], arr[start], arr[end]});
                        
                        // Skip duplicates for 'start'
                        do { start++; } while (start < end && arr[start] == arr[start - 1]);
                        // Skip duplicates for 'end'
                        do { end--; } while (start < end && arr[end] == arr[end + 1]);
                    } else if (sum < k) {
                        start++;
                    } else {
                        end--;
                    }
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends