//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

// class Solution {
//   public:
//     vector<int> constructLowerArray(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         int cnt=0;
//         std::vector<int> ans(n);
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i] > arr[j]){
//                     cnt++;
//                 }
//             }
//             ans[i] = cnt;
//             cnt=0;
//         }
//         return ans;
//     }
// };

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        vector<int>vec=arr;
        vector<int>ans;
        sort(vec.begin(),vec.end());
        
        for(int i=0;i<arr.size();i++){
            
            int idx=lower_bound(vec.begin(),vec.end(),arr[i])-vec.begin();
            ans.push_back(idx);
            vec.erase(vec.begin()+idx);
            
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends